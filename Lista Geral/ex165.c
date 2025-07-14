/*Escreva um programa que leia dois vetores A e B de 5 números inteiros e calcule um  terceiro vetor que contenha todos os elementos que estão presentes nos dois  vetores. O terceiro vetor não deverá armazenar valores repetidos. */

#include <stdio.h>
const int tam = 5;
int main(){
    int vetA[tam], vetB[tam], vetC[tam * 2];
    int contC = 0;
    printf("Informe o vetor A:\n");
    
    for(int i = 0; i < tam; i++){
        scanf("%d", &vetA[i]);
    }    
    printf("\nInforme o vetor B:\n");
    for(int i = 0; i < tam; i++){
        scanf("%d", &vetB[i]);
    }

    for(int i = 0; i < tam; i++){
        for(int k = 0; k < tam; k++){
            
            if(vetA[i] == vetB[k]){

                int repete = 0;
                for(int j = 0; j < contC; j++){
                    if(vetA[i] == vetC[j]){
                        repete = 1;
                        break;
                    }
                }

                    if(repete == 0){
                    vetC[contC] = vetA[i];
                    contC++;  
                }       
            }         
        }
    }
    printf("Vetor C:\n");
    for(int i = 0; i < contC; i++){
        printf("%d ", vetC[i]);
    }
    return 0;
}
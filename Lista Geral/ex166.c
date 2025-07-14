/*Escreva um programa que leia dois vetores A e B de 5 números inteiros e calcule um  terceiro vetor que contenha todos os elementos do vetor A que não estão presentes  no vetor B. O terceiro vetor não deverá armazenar valores repetidos. */

#include <stdio.h>
const int tam = 5;
int main(){
    int vetA[tam], vetB[tam], vetC[tam * 2];
    int contC = 0;

    printf("Informe o vetor A:\n");
    for(int i = 0; i < tam; i++){
        scanf("%d", &vetA[i]);
    }

    printf("Informe o vetor B\n");
    for(int i = 0; i < tam; i++){
        scanf("%d", &vetB[i]);
    }

    for(int i = 0; i < tam; i++){
        int repetido = 0;
        for(int k = 0; k < tam; k++){
            if(vetA[i] == vetB[k]){
                repetido = 1;
            }
        }
            
        for(int j = 0; j < contC; j++){
            if(vetA[i] == vetC[j]){
                    repetido = 1;
            }
        }
        if(repetido == 0){
            vetC[contC] = vetA[i];
            contC++;        
        }
    }
    printf("Vetor C:\n");
    for(int n = 0; n < contC; n++){
        printf("%d ", vetC[n]);
    }

    return 0;
}    



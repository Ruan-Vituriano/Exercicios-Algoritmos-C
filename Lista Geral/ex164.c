/*Escreva um programa que leia dois vetores A e B de 5 números inteiros cada e calcule  um terceiro vetor que contenha todos os elementos que estão presentes em pelo  menos um dos vetores lidos. O terceiro vetor não deve armazenar valores repetidos.*/
#include <stdio.h>
const int tam = 5;
int main(){
    int vetA[tam], vetB[tam], vetC[10];
    int contC = 0;

    printf("Informe o vetor A:\n");
    for(int i = 0; i < tam; i++){
        scanf("%d", &vetA[i]);
        
    }

    for(int i = 0; i < tam; i++){
        int novo = 1;
        for(int k = 0; k < contC; k++){
            if(vetA[i] == vetC[k]){
                novo = 0;
            }
        }
        if(novo == 1){
            vetC[contC] = vetA[i];
            contC++;
        }
    }

    printf("\nInforme o vetor B:\n");
    for(int i = 0; i < tam; i++){
        scanf("%d", &vetB[i]);
    }

      for(int i = 0; i < tam; i++){
        int novo = 1;
        for(int k = 0; k < contC; k++){
            if(vetB[i] == vetC[k]){
                novo = 0;
            }
        }
        if(novo == 1){
            vetC[contC] = vetB[i];
            contC++;
        }
    }

        printf("\nO vetor C eh:\n");
        for(int i = 0; i < contC; i++){
            printf("%d ", vetC[i]);
        }
    return 0;
}
/*9. Escreva um programa em C que leia dois vetores vetaA e vetB de cinco números
inteiros cada e gere um terceiro vetor vetC de 10 números. O vetor vetC deve ser
preenchido intercalando-se (seguindo estritamente a ordem dos valores nos dois
vetores), em cada posição, um valor do vetor vetA e um valor do vetor vetB. Por
exemplo, se os dois vetores tiverem os valores {2, 4, 8, 10, 15} e {1, 5, 7, 9, 13}, o terceiro
vetor deve ser {2, 1, 4, 5, 8, 7, 10, 9, 15, 13}.*/

#include <stdio.h>
const int tam = 5;
int main(){
    int vetA[tam], vetB[tam], vetC[tam * 2];
    printf("Vetor A:\n");
    for(int i = 0; i < tam; i++){
        scanf("%d", &vetA[i]);
    }
    printf("\nVetor B:\n");
    for(int i = 0; i < tam; i++){
        scanf("%d", &vetB[i]);
    }
    int j = 0;
    for(int i = 0; i < tam; i++){
        vetC[j++] = vetA[i];
        vetC[j++] = vetB[i];
    }
   
    printf("\nVetor C:\n");
    for(int i = 0; i < tam * 2; i++){
        printf("%d ", vetC[i]);
    }


    return 0;
}
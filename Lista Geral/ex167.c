/*167. Escreva um programa que leia um vetor de dez números inteiros e ordene o vetor  lido em ordem crescente.  */

#include <stdio.h>
#include <conio.h>
const int tam = 5;

void main(){
    int vet[tam];
    for(int i = 0; i < tam; i++){
        scanf("%d", &vet[i]);
    }

    for(int i = 0; i < tam; i++){
        int temp;
        for(int j = i; j < tam; j++){
            if(vet[i] > vet[j]){
                temp = vet[j];
                vet[j] = vet[i];
                vet[i] = temp;
            }
        }
    }
    printf("\n");
    for(int k = 0; k < tam; k++){
        printf("%d ", vet[k]);
    }
    getch();
}
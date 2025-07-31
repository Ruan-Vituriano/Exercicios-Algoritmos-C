/*Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a
leitura, leia um número inteiro N e imprima todas as posições em que o número N
aparece dentro do vetor.*/

#include <stdio.h>
const int tam = 5;

int main(){
    int vet[tam];
    for(int i = 0; i < tam; i++){
        scanf("%d", &vet[i]);
    }
    int num;
    printf("\n");
    scanf("%d", &num);
    for(int i = 0; i < tam; i++){
        if(vet[i] == num){
            printf("Posicao: %d\n", i + 1);
        }        
    }

    
    return 0;
}
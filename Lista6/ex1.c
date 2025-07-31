/*Escreva um programa que leia dez números inteiros e, após finalizar a leitura, leia um
número inteiro N (entre 1 e 10) e imprima qual foi o enésimo número digitado pelo
usuário.*/

#include <stdio.h>

int main(){
    int vet[5];
    for(int i = 0; i < 5; i++){
        scanf("%d", &vet[i]);
    }

    printf("\n");
    int pos;
    scanf("%d", &pos);
    printf("Numero: %d", vet[pos - 1]);
    return 0;
}
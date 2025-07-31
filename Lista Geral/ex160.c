/*160. Escreva um programa que leia um vetor de 10 números inteiros e inverta todos os  elementos do vetor. O programa deve ser resolvido com a utilização de apenas um  vetor. */

#include <stdio.h>
#include <conio.h>
const int tam = 10;
void main(){    
    int vet[tam];
    printf("Vetor:\n");
    for(int i = 0; i < tam; i++){
        scanf("%d", &vet[i]);
    }
    printf("Vetor antes:\n");
    for(int i = 0; i < tam; i++){
        printf("%d ", vet[i]);
    }

    int temp;
    for(int i = 0; i < tam / 2; i++){
        temp = vet[i];
        vet[i] = vet[tam - 1 - i];    
        vet[tam - 1 - i] = temp;
    }

    printf("\nVetor depois:\n");
    for(int i = 0; i < tam; i++){
        printf("%d ", vet[i]);
    }

    getch();

}
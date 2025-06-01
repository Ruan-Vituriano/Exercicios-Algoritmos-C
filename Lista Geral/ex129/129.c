/*
Escreva um programa que leia dois números inteiros M e N e imprima todos os pares  (x, y) possíveis de forma que x e y pertençam ao intervalo [M, N] e y seja sempre maior  ou igual a x. */

#include <stdio.h>

int main(){
    int M, N;
    printf("Informe M e N:");
    scanf("%d %d", &M, &N);

    for(int i = M; i <= N; i++){
        int k;
        for(k = i; k <= N; k++){
            printf("(%d,%d)\n", i, k);
        }
    }

    return 0;
}
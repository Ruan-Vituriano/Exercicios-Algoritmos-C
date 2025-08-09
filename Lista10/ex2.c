/*2. Escreva um programa que leia o termo inicial e a razão de uma progressão aritmética e um
número inteiro positivo N e imprima os N primeiros termos dessa progressão. A impressão
deve ser feita por meio de um subprograma.*/

#include <stdio.h>

void ntermos(int a1, int r, int N){
    for(int i = 0; i < N; i++){
        printf("%d ", a1);
        a1 += r;
    }
}


void main(){
    int a1, r, N;
    printf("A1 e Razao:\n");
    scanf("%d%d", &a1, &r);
    printf("N termos: ");
    scanf("%d", &N);
    ntermos(a1, r, N);
}
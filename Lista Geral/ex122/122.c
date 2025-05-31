/*122. Escreva um programa que leia um número inteiro N e verifique se ele pertence à série  de Fibonacci. */
#include <stdio.h>
#include <conio.h>

void main(){
    int N;
    printf("Digite um numero:\n");
    scanf("%d", &N);

    int termo_ant = 0, termo_atual = 0, termo_prox = 1;
    if (N == 1) {
        printf("1 1\n");
        printf("O numero %d pertence a serie de Fibonacci.\n", N);
        return;
    } else if (N <= 0){
        printf("O numero %d nao pertence a serie de Fibonacci.\n", N);
        return;
    }


    while(termo_prox <= N){
        printf("%d ", termo_prox);
        termo_ant = termo_atual;
        termo_atual = termo_prox;
        termo_prox = termo_ant + termo_atual;

    }
    printf("\n");
    if(termo_atual == N){
        printf("O numero %d, pertence a serie de Fibonacci.", N);
    } else {
        printf("O numero %d, nao pertence a serie de Fibonacci.", N);
    }

}
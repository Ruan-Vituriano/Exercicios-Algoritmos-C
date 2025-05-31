/*Escreva um programa que leia um número inteiro N e imprima o primeiro termo da série
de Fibonacci que é maior do que N.
*/

#include <stdio.h>

void main(){
    int termo_atual = 0, prox_termo = 1, termo_ant = 0, num;
    printf("Informe um numero:\n");
    scanf("%d", &num);
    do {
        printf("%d ", prox_termo);
        termo_ant = termo_atual;
        termo_atual = prox_termo;
        prox_termo = termo_ant + termo_atual;
    } while (prox_termo <= num);

    printf("\n%d", prox_termo);
}
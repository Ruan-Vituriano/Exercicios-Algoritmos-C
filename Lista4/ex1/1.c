/*Escreva um programa que leia um número inteiro positivo N e calcule a soma de todos
os números inteiros menores ou iguais a M.*/

#include <stdio.h>

void main(){
    int N;
    scanf("%d", &N);
    int soma = 0;
    int i = 1;
    do{
        soma += i;
        printf("%d ", i);
        i++;
    }while(i <= N);

    printf("= %d", soma);
}
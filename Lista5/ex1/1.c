/*
Escreva um programa que imprima todos leia um número inteiro N e imprima os dez

primeiros termos da sua tabuada no formato abaixo. No exemplo abaixo, considerou-
se que o valor de N é 5.

5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
....
5 x 10 = 50*/



#include <stdio.h>

int main(){
    int num;
    printf("Informe um numero: ");
    scanf("%d", &num);

    for(int i = 1; i <= 10; i++){
        int N = num * i;
        printf("%d x %d = %d\n", num, i, N);
    }

    return 0;
}
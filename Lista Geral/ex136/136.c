/*
136. Escreva um programa que leia um número inteiro positivo N e calcule o seu valor  correspondente em binário. */

#include <stdio.h>

int main(){
    int num;
    printf("Informe um numero: ");
    scanf("%d", &num);
    int binario [32];
    int i = 0;
    while(num != 0){
        binario[i] = num % 2;
        num /= 2;
        i++;
    }
    for(int k = i - 1; k >= 0; k--){
        printf("%d ", binario[k]);
    }
    return 0;
}
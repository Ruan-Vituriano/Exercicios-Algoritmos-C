/*1. Escreva um programa que leia três números inteiros e calcule a sua média aritmética. O
cálculo da média deve ser realizado através de um subprograma.*/

#include <stdio.h>
#include <conio.h>
const int numeros = 3;
float media(float soma, int qnt){
    float media = soma / qnt;
    return media;
}

void main(){
    float num, soma = 0, i;
    for(i = 0; i < numeros; i++){
        printf("Informe um numero:\n");
        scanf("%f", &num);
        soma += num;
    }
    printf("Media: %.1f", media(soma, i));

    getch();
}
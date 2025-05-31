/*Escreva um programa que leia um número inteiro positivo N e imprima a maior  quantidade possível de números inteiros positivos de forma que a soma de todos os  números impressos seja menor ou igual a N. */

#include <stdio.h>
#include <string.h>
#include <conio.h>
void main(){
    int num;
    printf("Informe um numero:\n");
    scanf("%d", &num);
    int i = 1, soma = 0;
    
    while(soma + i <= num){
        printf("%d", i);
        i++;
        soma += i;
    }
    getch();

}
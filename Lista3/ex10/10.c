/*Escreva um programa que leia um número inteiro N e imprima a figura abaixo, onde N
é o número de elementos impressos na primeira linha. No exemplo abaixo, foi
considerado que N=5.
*
**
***
****
*****  */

#include <stdio.h>
#include <conio.h>

void main(){
    int num, i;
    printf("Escreva um numero:\n");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
        int j;
        for(j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");

    }

}
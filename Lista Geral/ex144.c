/*Escreva um programa que leia um número inteiro N e calcule o primeiro número  natural cujo fatorial é maior do que N.  */

#include <stdio.h>

void main(){
    int N;
    scanf("%d", &N);
    int i = 0;
    int fator = 1;
    while(fator <= N){
        i++;
        fator *= i;
    }
    
    printf("%d", i);
    getch();
}
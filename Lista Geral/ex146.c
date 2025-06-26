/*Escreva um programa que leia dois números inteiros M e N e calcule os valores de M  div N e M mod N. Os valores devem ser calculados sem o uso dos operadores div e  mod. */

#include <stdio.h>

int main(){
    int M, N;
    scanf("%d%d", &M, &N);
    int div = 0;
    if(N == 0){
        printf("Divisao por zero impossivel!");
        return 1;
    }
    if(M > 0){
    while(M >= N){
        M -= N;
        div++;
    }
    printf("Resultado: %d\nResto: %d", div, M);
    } else {
        M *= (-1);
        while(M >= N){
        M -= N;
        div++;
        }
    printf("Resultado: -%d\nResto: %d", div, M);
    }
    
    return 0;
}
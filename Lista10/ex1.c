/*1. Escreva um programa que leia dois números inteiros M e N e imprima todos os números
primos que existem no intervalo [M, N]. A impressão deve ser feita por meio de um
subprograma.*/

#include <stdio.h>

void primos(int M, int N){
    for(int i = M; i <= N; i++){
        int ehprimo = 1;
        for(int k = 2; k <= i / 2; k++){
            if(i % k ==0){
                ehprimo = 0;
            }
        }
        if(ehprimo && i > 1){
            printf("%d ", i);
        }
    }
    

}


void main(){
    int M, N;
    printf("Informe M e N\n");
    scanf("%d%d", &M, &N);
    primos(M, N);
}
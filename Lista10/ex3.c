/*3. Escreva um programa que leia um número inteiro positivo N e imprima os N primeiros termos
da série de Fibonacci.*/
#include <stdio.h>

void fib(int N){
    int a = 0, b= 0, c = 1;
        for(int i = 0; i < N; i++){
        a = b;
        b = c;
        c = a + b;
        printf("%d ", b);
    }
}

void main(){    
    int N;
    printf("Termos da sequencia: ");
    scanf("%d", &N);
    fib(N);
}
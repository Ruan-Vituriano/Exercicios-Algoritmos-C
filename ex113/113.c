//113. Escreva um programa que leia dois números inteiros M e N e imprima todos os  números primos existentes no intervalo [M, N]. 

#include <stdio.h>
#include <conio.h>

void main(){
    int M, N;
    printf("Informe M e N: ");
    scanf("%d%d", &M, &N);

    int i, cont, k;
    for(i=M; i<=N; i++){
        cont = 0;
        for(k=1; k<=i; k++){
            if(i % k == 0) {
                cont++;
            }
        }
        if(cont == 2) {
            printf("%d ", i);
        }
    }
    getch();
}
/*5. Escreva um programa que leia dois números inteiros positivos M e N e imprima todos os
números primos que existem no intervalo [M, N]. Um subprograma deve ser usado para
verificar se um determinado número inteiro é primo ou não.*/

#include <stdio.h>
#include <conio.h>

int n_primos(int num){
        int primo = 1;
        if(num == 1){
            return 0;
        }

        for(int j = 2; j <= num / 2; j++){
            if(num % j == 0){
                primo = 0;
            }
        }
        return primo;
}

void main(){
    int M, N, i;
    printf("Informe o M e N:\n");
    scanf("%d%d", &M, &N);

    for(i = M; i <= N; i++){
        int num_primo = n_primos(i);
        if(num_primo == 1){
            printf("%d primo\n",i);
        } else {
            printf("%d nao primo\n",i);
        }
    }

    getch();
}
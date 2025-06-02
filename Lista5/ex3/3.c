/*Escreva um programa que leia o termo inicial e a razão de uma progressão aritmética
e, em seguida, leia um número inteiro N e verifique se o número N pertence (ou não) à
progressão.*/

#include <stdio.h>

int main(){
    int a1, r, N;
    printf("Informe o A1 e a razao:\n");
    scanf("%d%d", &a1, &r);
    printf("Informe N:");
    scanf("%d", &N);
    do{
        a1 += r;
    }while(a1 < N);
    if(a1 == N){
        printf("O numero pertence a PA");
    } else {
        printf("O numero nao pertence a PA");
    }
    

    return 0;
}
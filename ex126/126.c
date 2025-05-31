/*126. Escreva um programa que leia o termo inicial e a razão de uma PA e, a seguir, leia um  número N e verifique se o número N pertence à progressão. */

#include <stdio.h>

int main(){
    int a1, r, N;
    printf("Informe o primeiro termo, a razao e o N:\n");
    scanf("%d %d %d", &a1, &r, &N);

    if(a1 == N){
        printf("O numero %d pertence a PA", N);
        return 0;
    }
    int soma = 0;
    int pertence = 0;
    
    for(int i = 1; i <= N; i++){
        soma += r;
        if(soma == N) pertence = 1;
    }
    if(pertence){
        printf("O numero %d pertence a PA", N);
    } else {
        printf("O numero %d NAO pertence a PA", N);
    }
    return 0;
}
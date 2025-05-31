/*123. Escreva um programa que leia dois números inteiros M e N e calcule os N primeiros  números primos maiores ou iguais a M. */

/*for(j = 1; j <= i; j++){
        if(i % j == 0){
            cont++;
            }     
        }*/



#include <stdio.h>
#include <conio.h>

int main(){
    int M, N;
    printf("Digite os valores de M e N:\n");
    scanf("%d %d", &M, &N);
    int num = M, cont = 0;
    while(cont < N){
        int ehprimo = 1;

        if(num < 2){
            ehprimo = 0;
        } else {
            for(int i = 2; i * i <= num; i++){
                if (num % i == 0) {
                    ehprimo = 0;
                    break;
                }
            }
        }
        if(ehprimo == 1){
            printf("%d ", num);
            cont++;
        }
        num++;

    }    


}
    
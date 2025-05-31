/*125. Escreva um programa que leia um número inteiro positivo N e imprima os N primeiros  números perfeitos.  */

#include <stdio.h>

int main(){
    int N;
    printf("Informe N: ");
    scanf("%d", &N);
    int cont = 0;
    long long int num = 6;
    while(cont < N){
    int soma = 0;

       for(int i = 1; i < num; i++){
        
        if(num % i == 0){
            soma += i;
        }
        
       }
        if(soma == num){
            printf("%d\n", num);
            cont++;
        }
       num++;
    }
}
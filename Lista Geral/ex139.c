/*Escreva um programa que leia um número inteiro N e um número inteiro K e  identifique o k-ésimo algarismo (da direita para a esquerda) do número N. Caso o 
valor de k seja maior do que a quantidade de algarismos de N, a resposta do  programa deve ser 0.  
*/

#include <stdio.h>

int main(){
    int N, K;
    scanf("%d%d", &N, &K);
    int original = N;
    int resto;

    do{ 
        resto = N % 10;
        N /= 10;
        
        K--;            
    } while (K > 0);
    printf("%d", resto);
    

    return 0;
}
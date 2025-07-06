/*157. Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a  leitura, leia um número inteiro N e imprima todas as posições em que o número N  aparece dentro do vetor. */

#include <stdio.h>
const int n = 10; 
int main(){
    int vet[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }
    int num;
    printf("Numero: ");
    scanf("%d",&num);
    for(int i = 0; i < n; i++){
        if(vet[i] == num){
            printf("Posicao: %d\n", i);
        }
    }

    return 0;
}
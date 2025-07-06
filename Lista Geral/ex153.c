/*153. Escreva um programa que leia dez números inteiros e, após finalizar a leitura,  imprima todos os números lidos na mesma ordem em que eles foram digitados. */

#include <stdio.h>
const int n = 5;
void main(){
    int vetor[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }
    getch();
}
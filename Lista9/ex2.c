/*2. Escreva um programa que leia um vetor de 10 números inteiros e calcule a média de todos os
seus números. O cálculo da média deve ser realizado por meio de uma função.*/

#include <stdio.h>
#include <conio.h>
const int qnt = 10;
float media(int vet[], int tam){
    int soma = 0, i;
    for(i = 0; i < tam; i++){
        soma += vet[i];
    }
    float media = (float)soma / i;
    return media;
}



void main(){
    int vet[qnt], i;
    printf("Vetor:\n");
    for(i = 0; i < qnt; i++){
        scanf("%d", &vet[i]);
    }

    printf("Media:\n");
    
    printf("%.1f", media(vet, qnt));

}
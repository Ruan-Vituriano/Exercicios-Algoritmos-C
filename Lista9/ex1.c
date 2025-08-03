/*1. Escreva um programa que leia um vetor de 10 números inteiros e calcule a soma de todos os
seus números. O cálculo da soma deve ser realizado por meio de uma função.*/

#include <stdio.h>
#include <conio.h>
const int qnt = 10;
int soma(int vet[], int tam){
    int soma = 0, i;
    for(i = 0; i < tam; i++){
        soma += vet[i];
    }
    return soma;
}



void main(){
    int vet[qnt], i;
    printf("Vetor:\n");
    for(i = 0; i < qnt; i++){
        scanf("%d", &vet[i]);
    }

    printf("Soma:\n");
    
    printf("%d", soma(vet, qnt));

}
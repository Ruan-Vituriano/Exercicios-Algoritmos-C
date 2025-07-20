/*Escreva um programa que leia um vetor de dez números reais (centrado na origem
do plano cartesiano) e calcule o valor do seu módulo. O módulo de um vetor u = (x1,
x2, ..., xN) é calculado através da fórmula abaixo.*/

#include <stdio.h>
#include <math.h>
const int tam = 10;
int main(){
    float vet[tam];
    float soma = 0;
    for(int i = 0; i < tam; i++){
        scanf("%f", &vet[i]);
        soma += vet[i] * vet[i]; 
    }
    float modulo = sqrt(soma);
    printf("Modulo do vetor: %.1f", modulo);

    return 0;
}
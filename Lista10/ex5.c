/*5. Escreva um programa que leia um vetor e, em seguida, leia um número inteiro N e imprima
todas as posições do vetor em que o número N aparece.*/
#include <stdio.h>
const int tam = 10;

void posN(int vet[], int tam, int N){
    for(int i = 0; i < tam; i++){
        if(vet[i] == N){
            printf("Posicao: %d\n", i + 1);
        }
    }
}

void lervet(int vet[], int tam){
    for(int i = 0; i < tam; i++){
        scanf("%d", &vet[i]);
    }
}

void main(){
    int vet[tam], num;
    printf("Informe o vetor:\n");
    lervet(vet, tam);
    printf("Informe o numero:\n");
    scanf("%d", &num);
    posN(vet, tam, num);
}
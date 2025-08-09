/*6. Escreva um programa que leia um vetor e, em seguida, imprima todos os números pares do
vetor. A impressão deve ser realizada por meio de um subprograma.*/

#include <stdio.h>
const int tam = 10;
int verifpar(int num){
    int par = 1;
    if(num % 2 == 0){
        par = 0;
    }
    return par;
}

void vetpar(int vet[], int tam){
    for(int i = 0; i < tam; i++){
        if(verifpar(i)){
            printf("%d ", vet[i]);
        }
    }
}

void lervet(int vet[], int tam){
    for(int i = 0; i < tam; i++){
        scanf("%d", &vet[i]);
    }
}

void main(){
    int vet[tam];
    printf("Informe o vetor:\n");
    lervet(vet, tam);
    vetpar(vet, tam);
}
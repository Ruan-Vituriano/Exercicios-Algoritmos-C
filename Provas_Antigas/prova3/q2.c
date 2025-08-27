/*
vet1 
vet2
X
*/

#include <stdio.h>
const int tam = 5;

int pos(int vet1[], int vet2[], int X){
    if(X == tam){
        return 0;
    }
    if(vet1[X] == vet2[X]){
        return 1 + pos(vet1, vet2, X + 1);
    }
    return pos(vet1, vet2, X + 1);
}

void lervet(int vet[]){
    for(int i = 0; i < tam; i++){
        scanf("%d", &vet[i]);
    }
    printf("\n");
}

void main(){
    int vet1[tam], vet2[tam], X;

    printf("Vet1:\n");
    lervet(vet1);
    printf("Vet2:\n");
    lervet(vet2);

    printf("Num: ");
    scanf("%d", &X);

    int npos = pos(vet1,vet2,X);
    printf("Posicoes iguais: %d", npos);
}
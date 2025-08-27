/*270. Escreva um subprograma recursivo que receba como entrada dois vetores de 10  números inteiros cada e um número inteiro N e verifique se os dois vetores são  idênticos a partir da posição N. 
*/

#include <stdio.h>
int tam = 5;
int ident(int vet1[], int vet2[], int N){
    if(N == tam) return 1;
    if(vet1[N] != vet2[N]) return 0;
    return ident(vet1, vet2, N + 1);
}


void lervet(int vet[]){
   for(int i = 0; i < tam; i++){
        scanf("%d", &vet[i]);
    }
}

void main(){
    int vet1[tam], vet2[tam], N, X;
    lervet(vet1);
    printf("Vet2:\n");
    lervet(vet2);
    printf("N: ");
    scanf("%d", &N);
    int verificacao = ident(vet1, vet2, N);
    if(verificacao){
        printf("Iguais");
    }else {
        printf("Diferentes");
    } 
    
}
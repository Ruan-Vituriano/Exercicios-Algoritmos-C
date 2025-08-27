/*267. Escreva um subprograma recursivo que receba como entrada um vetor de 10  números inteiros, um número inteiro N entre 1 e 10 e um número inteiro X e  verifique quantas vezes o número X aparece no vetor a partir da posição N. 
*/

#include <stdio.h>
const int tam = 5;
int verif(int vet[tam], int N, int X){
    if(N == tam){
        return 0;
    }
    if(vet[N] == X){
        return 1 + verif(vet, N + 1, X);
    }
    return verif(vet, N + 1, X);
    
}

void lervet(int vet[]){
   for(int i = 0; i < tam; i++){
        scanf("%d", &vet[i]);
    }
}

void main(){
    int vet[tam], N, X;
    lervet(vet);
    printf("N: ");
    scanf("%d", &N);
    printf("X: ");
    scanf("%d", &X);

    printf("%d vezes", verif(vet, N, X));
    

}
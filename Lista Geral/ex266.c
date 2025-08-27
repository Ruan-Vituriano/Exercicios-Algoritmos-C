/*266. Escreva um subprograma recursivo que receba como entrada um vetor de 10  números inteiros e um número inteiro N entre 1 e 10 e calcule a soma de todos os  elementos do vetor a partir da posição N. 
*/

#include <stdio.h>
const int tam = 5;
int somavet(int vet[tam], int N){
    if(N == tam - 1){
        return vet[N];
    } 

    return vet[N] + somavet(vet, N + 1);
}

void main(){
    int vet[tam], N;
    for(int i = 0; i < tam; i++){
        scanf("%d", &vet[i]);
    }

    scanf("%d", &N);

    printf("%d", somavet(vet,N));
}
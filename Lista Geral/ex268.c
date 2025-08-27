/*268. Escreva um subprograma recursivo que receba como entrada um vetor de 10  números inteiros e um número inteiro N entre 1 e 10 e verifique quantos números  pares existem a partir da posição N do vetor. 
*/

#include <stdio.h>
const int tam = 5;
int ver_par(int num){
    if(num % 2 == 0) return 1;
    return 0;
}


int pares(int vet[], int N){
    if(N == tam) return 0;
    
    if(ver_par(vet[N])){
        return 1 + pares(vet, N + 1);
    }
    return pares(vet, N + 1);
}



void lervet(int vet[]){
   for(int i = 0; i < tam; i++){
        scanf("%d", &vet[i]);
    }
}
void main(){
    int vet[tam], N;
    lervet(vet);
    printf("N: ");
    scanf("%d", &N);

    printf("%d", pares(vet,N));
}
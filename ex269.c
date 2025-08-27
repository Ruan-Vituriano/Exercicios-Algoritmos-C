/*269. Escreva um subprograma recursivo que receba como entrada um vetor de 10  números inteiros e um número inteiro N entre 1 e 10 e verifique se existe algum  número primo a partir da posição N do vetor. 
*/

#include <stdio.h>
const int tam = 5;
int ver_primos(int num){
    if(num <= 1) return 0;
    for(int i=2; i <= num / 2; i++){
        if(num % i == 0) return 0;
    }
    return 1;
}


int primos(int vet[], int N){
    if(N == tam) return 0;
    
    if(ver_primos(vet[N])){
        return 1 + primos(vet, N + 1);
    }
    return primos(vet, N + 1);
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

    printf("%d", primos(vet,N));
}
/*186. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e  a seguir leia um número inteiro N entre 1 e 5 e calcule o maior elemento da linha N.  */

#include <stdio.h>
const int ordem = 2;
int main(){
    float matriz[ordem][ordem];
    int N;
    for(int i = 0; i < ordem; i++){
        for(int j = 0; j < ordem; j++){
            scanf("%f", &matriz[i][j]);
        }
    }
    printf("N: ");
    scanf("%d", &N);
    N--;
    float atual, maior;
    for(int i = 0; i < ordem; i++){
        atual = matriz[N][i];
        if(i == 0){
            maior = matriz[N][i];
        } else {
            if(atual > maior){
                maior = atual;
            }
        }   
    }
    N++;
    printf("Maior elemento da linha: %d eh: %.1f", N, maior);
    return 0;
}
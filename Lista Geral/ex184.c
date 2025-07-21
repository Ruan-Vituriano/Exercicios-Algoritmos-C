/*184. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e  a seguir leia um número inteiro N entre 1 e 5 e calcule a média aritmética dos elementos da coluna N. */

#include <stdio.h>
const int ordem = 2;

int main(){
    int matriz[ordem][ordem];

    for(int i = 0; i < ordem; i++){
        for(int j = 0; j < ordem; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    int N;
    int soma = 0, cont = 0;
    printf("Coluna:\n");
    scanf("%d", &N);
    N--;
    for(int i = 0; i < ordem; i++){
        soma += matriz[i][N];
        cont++;
    }
    N++;

    soma /= cont;
    printf("A media da coluna %d eh: %d", N, soma);

    return 0;
}
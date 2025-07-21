/*183. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e  a seguir leia um número inteiro N entre 1 e 5 e calcule a soma de todos os elementos  da linha N.  */

#include <stdio.h>
const int ordem = 2;

int main(){
    int matriz[ordem][ordem];

    for(int i = 0; i < ordem; i++){
        for(int j = 0; j < ordem; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    int linha;
    int soma = 0;
    printf("Linha:\n");
    scanf("%d", &linha);
    linha--;
    for(int i = 0; i < ordem; i++){
        soma += matriz[linha][i];
    }
    linha++;
    printf("A soma da linha %d eh: %d", linha, soma);

    return 0;
}
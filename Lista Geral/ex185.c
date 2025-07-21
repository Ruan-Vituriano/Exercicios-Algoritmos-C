/*185. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e  calcule o valor da soma dos elementos de cada uma de suas linhas. 
*/

#include <stdio.h>
const int ordem = 2;

int main(){
    float matriz[ordem][ordem];
    float soma = 0;
    for(int i = 0; i < ordem; i++){
        for(int j = 0; j < ordem; j++){
            scanf("%f", &matriz[i][j]);
        }
    }
    for(int i = 0; i < ordem; i++){
        for(int j = 0; j < ordem; j++){
            soma += matriz[i][j];
        }
    }

    printf("Soma: %.1f", soma);
    return 0;
}
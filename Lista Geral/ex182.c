/*182. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e  determine o maior valor presente na diagonal principal. */

#include <stdio.h>
const int ordem = 2;

int main(){
    int matriz[ordem][ordem];
    int atual, maior;
    for(int i = 0; i < ordem; i++){
        for(int j = 0; j < ordem; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
        for(int i = 0; i < ordem; i++){
            atual = matriz[i][i];
            if(i == 0){
                maior = matriz[i][i];
            } else {
                if(atual > maior){
                    maior = matriz[i][i];
                }
            }
            
        }
        
        printf("Maior numero da diagonal principal: %d", maior);
    return 0;
}
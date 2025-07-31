/*Considerando um
tabuleiro no qual a posição das casas é definida inicialmente da esquerda para a
direita e depois de cima para baixo, escreva um programa em C que leia um número
inteiro correspondente à quantidade de linhas e colunas do tabuleiro (considere que a
quantidade de linhas é sempre igual à quantidade de colunas) e gere uma matriz
quadrada para representar o tabuleiro. A matriz gerada deve armazenar, em cada
posição, a quantidade de grãos que deve ser armazenada em cada posição do
tabuleiro. Após gerar e preencher a matriz, o programa deve imprimi-la para o usuário.*/

#include <stdio.h>

int main() {
    int ordem;  
    printf("Informe a ordem: ");
    scanf("%d", &ordem);
    int tabuleiro[ordem][ordem];
    int grao = 1;
    for(int i = 0; i < ordem; i++){
        for(int j = 0; j < ordem; j++){
            tabuleiro[i][j] = grao;
            grao *= 2;
        }
    }

    for(int i = 0; i < ordem; i++){
        for(int j = 0; j < ordem; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}

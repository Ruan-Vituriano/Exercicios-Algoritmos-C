/*1. Jogos de tabuleiro são atividades comuns de entretenimento na vida cotidiana das
pessoas. Uma de suas características é a necessidade do uso de um tabuleiro com
localizações bem definidas para o posicionamento de peças, podendo indicar
também as fases do jogo. No livro O Homem que Calculava, de Malba Tahan*/

#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int mat[N][N];
    int graos = 1;;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            mat[i][j] = graos;    
            graos *= 2;
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}

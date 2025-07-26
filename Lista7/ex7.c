/*7. Escreva um programa que leia uma matriz 3x4 e imprima a posição do maior número
de cada uma das linhas da matriz informada.*/

#include <stdio.h>
const int lin = 2;
const int col = 3;
int main(){
    int mat[lin][col];
    printf("Informe a matriz:\n");

    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }
    int atual, coluna;
    int j, i;
    for(i = 0; i < lin; i++){
        int maior;
        for(j = 0; j < col; j++){
            atual = mat[i][j];
            
            if(i == 0){
                maior = atual;
                coluna = j + 1;
            } else {
                if(atual > maior){
                    maior = atual;
                    coluna = j + 1;
                }
            }
        }
        printf("Maior numero da linha %d, esta na coluna %d sendo: %d\n", i + 1, coluna, maior);
    }
    return 0;
}
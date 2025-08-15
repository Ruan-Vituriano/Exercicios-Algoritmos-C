/*256. Escreva um subprograma recursivo que receba como entrada uma matriz quadrada  de ordem 5 de números reais e um número inteiro N (entre 1 e 5) e imprima os N  primeiros números da diagonal principal. 
*/

#include <stdio.h>
const int tam = 3;

void lermat(int mat[][tam]){
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }
}

void diagonal(int mat[tam][tam], int N){
    if(N <= 0){
        return;
    }
    diagonal(mat, N - 1);
    printf("%d ", mat[N - 1][N - 1]);
}


void main(){
    int mat[tam][tam];
    int N;

    lermat(mat);
    printf("N:\n");
    scanf("%d", &N);
    diagonal(mat, N);
}
/*7. Escreva um programa que leia uma matriz quadrada de ordem 4 de números inteiros e, em
seguida, leia um número inteiro N entre 1 e 4. Depois o programa deve imprimir todos os
números da linha N da matriz e, a seguir, ele deve imprimir todos os números da coluna N da
matriz. O programa deve ter: um subprograma para fazer o preenchimento da matriz, um
subprograma para imprimir os números de uma linha específica de uma matriz e um
subprograma para imprimir os números de uma coluna específica de uma matriz.*/

#include <stdio.h>
const int tam = 3;
void lermat(int mat[][tam], int tam){
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
        scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }
}

void linhamat(int mat[][tam], int tam, int N){
    for(int j = 0; j < tam; j++){
        printf("%d ", mat[N][j]);
    }
}
void colmat(int mat[][tam], int tam, int N){
    for(int j = 0; j < tam; j++){
        printf("%d ", mat[j][N]);
    }
}


void main(){
    int mat[tam][tam];
    int N;
    lermat(mat, tam);
    printf("N: ");
    scanf("%d", &N);
    N--;
    linhamat(mat, tam, N);
    printf("\n");
    colmat(mat, tam, N);
}
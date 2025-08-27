/*274. Escreva um subprograma recursivo que receba como entrada duas matrizes  quadradas de ordem 5 de números inteiros e um número inteiro N entre 1 e 5 e  verifique se as duas matrizes são idênticas a partir da linha N. 
*/

#include <stdio.h>
const int tam = 3;

int verif(int mat1[][tam],int mat2[][tam], int N){
    if(N == tam) return 1;
    for(int j = 0; j < tam; j++){
        if(mat1[N][j] != mat2[N][j]) return 0;
    }
    return verif(mat1, mat2, N + 1);
}


void lermat(int mat[][tam]){
   for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            scanf("%d", &mat[i][j]);
        }   
        printf("\n"); 
    }
}

void main(){
    int mat1[tam][tam], mat2[tam][tam], N;
    lermat(mat1);
    printf("Mat2:\n");
    lermat(mat2);
    printf("N: ");
    scanf("%d", &N);
    if(verif(mat1, mat2, N)){
        printf("Iguais a partir de %d", N);
    } else {
        printf("Diferentes");
    }

}

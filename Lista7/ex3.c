/*3. Escreva um programa que leia duas matrizes quadradas de ordem 3 de números
inteiros e gere uma terceira matriz representando a soma das duas matrizes
informadas.*/


#include <stdio.h>
const int tam = 3;

int main(){
    int matA[tam][tam], matB[tam][tam], matC[tam][tam];
    printf("Matriz 1:\n");
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            scanf("%d", &matA[i][j]);
        }
    }
    printf("\nMatriz 2:\n");
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            scanf("%d", &matB[i][j]);
        }
    }

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            matC[i][j] = matA[i][j] + matB[i][j];
        }
    }

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            printf("%d ", matC[i][j]);
        }
        printf("\n");
    }


    return 0;
}
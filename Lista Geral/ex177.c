/*177. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e  calcule a sua matriz transposta. */

#include <stdio.h>
#include <conio.h>
const int ordem = 4;
void main(){
    int mat[ordem][ordem];
    for(int i = 0; i < ordem; i++){
        for(int j = 0; j < ordem; j++){
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }


    for(int i = 0; i < ordem - 1; i++){
        for(int j = i + 1; j < ordem; j++){
                int temp = mat[i][j];
                mat[i][j] = mat[j][i];
                mat[j][i] = temp;
        }
    }
    for(int i = 0; i < ordem; i++){
        for(int j = 0; j < ordem; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    getch();
}
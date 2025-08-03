/*3. Escreva um programa que leia uma matriz quadrada de ordem 4 de números inteiros e calcule
a quantidade de números primos que existem em cada coluna da matriz. O programa deve
ter um subprograma que calcula a quantidade de números primos que existem em uma linha
específica da matriz.*/

#include <stdio.h>
#include <conio.h>
const int ordem = 3;
int qnt_primos(int mat[ordem][ordem], int linha){
    int i, j;
    int qntd = 0;

    for(i = 0; i < ordem; i++){
        int primo = 1;
        for(j = 2; j <= mat[linha][i] / 2; j++){
            if(mat[linha][i] % j == 0){
                primo = 0;
            }
        }
        if(primo == 1 && mat[linha][i] > 1){
            qntd++;
        }
    }

    return qntd;
}



void main(){
    int mat[ordem][ordem];
    printf("Informe a matriz:\n");

    for(int i = 0; i < ordem; i++){
        for(int j = 0; j < ordem; j++){
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }


    for(int i = 0; i < ordem; i++){
        printf("Linha %d: %d\n", i + 1, qnt_primos(mat, i));
    }

    getch();
}
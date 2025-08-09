/*Escreva um programa que leia uma matriz quadrada de ordem 4 de números inteiros e, em
seguida, leia um número inteiro N e verifique em quantas linhas da matriz o número N
aparece. A verificação deve ser feita por meio de uma função.*/

#include <stdio.h>
const int ordem = 3;

int verificacao(int mat[ordem][ordem],int N){
    int cont = 0;

    for(int i = 0; i < ordem; i++){
        int vdd = 0;
        for(int j = 0; j < ordem; j++){
            if(mat[i][j] == N){
                vdd = 1;
            }
        }
        if(vdd){
            cont++;
        }
    }

    return cont;
}

void main(){
    int num;
    int mat[ordem][ordem]; 
    printf("Matriz:\n");

    for(int i = 0; i < ordem; i++){
        for(int j = 0; j < ordem; j++){
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }

    printf("Numero: ");
    scanf("%d", &num);

    printf("O numero %d aparece em %d linhas.", num, verificacao(mat, num));
}
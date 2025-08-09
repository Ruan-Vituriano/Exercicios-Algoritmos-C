/*7. Escreva um programa que leia uma matriz quadrada de ordem 4 de números inteiros e
verifique quantas linhas nulas existem na matriz. O programa deve ter uma função para
verificar se uma determinada linha da matriz é nula ou não. Uma linha da matriz é nula se
todos os seus números forem iguais a 0.*/

#include <stdio.h>
const int ordem = 3;

int nula(int mat[ordem][ordem]){
    int cont = 0;

    for(int i = 0; i < ordem; i++){
        int vdd = 1;
        for(int j = 0; j < ordem; j++){
            if(mat[i][j] != 0){
                vdd = 0;
            }
        }
        if(vdd){
            cont++;
        }
    }

    return cont;
}

void main(){
    int mat[ordem][ordem]; 
    printf("Matriz:\n");

    for(int i = 0; i < ordem; i++){
        for(int j = 0; j < ordem; j++){
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }

    printf("%d linhas nulas.", nula(mat));
}
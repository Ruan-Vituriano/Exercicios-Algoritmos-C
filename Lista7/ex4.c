/*4. Escreva um programa que leia uma matriz quadrada de ordem 3 de números inteiros e
verifique quantas linhas nulas existem na matriz.*/

#include <stdio.h>
const int tam = 3;
int main(){
    int mat[tam][tam];
    int linhas_nulas = 0;
    printf("Informe a matriz:\n");

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < tam; i++){
        int nula = 1;
        for(int j = 0; j < tam; j++){
            if(mat[i][j] != 0){
                nula = 0;
            }
        }
        if(nula == 1){
            linhas_nulas++;
        } 
    
    }
    printf("%d linhas nulas", linhas_nulas);
    return 0;
}
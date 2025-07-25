/*2. Escreva um programa que leia uma matriz quadrada de ordem 3 de números inteiros
e um número inteiro N e multiplique a matriz informada pelo número N.*/

#include <stdio.h>
#include <conio.h>
const int tam = 2;
void main(){
    int mat[tam][tam];
    int num;

    printf("Matriz:\n");
    for(int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){
            scanf("%d", &mat[i][j]);
        }
        
    }

    printf("\nMultiplo:\n");
    scanf("%d", &num);

    for (int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){
            printf("%d ", mat[i][j] * num);
        }  
        printf("\n");
    }
    

    getch();
}
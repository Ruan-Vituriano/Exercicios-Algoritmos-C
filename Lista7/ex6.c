/*6. Escreva um programa que leia uma matriz 4x4 de números inteiros e, em seguida, leia
um número inteiro N e verifique em quantas colunas da matriz o número N aparece.*/

#include <stdio.h>
const int tam = 3;
int main(){
    int mat1[tam][tam];
    int num;
    printf("Informe a matriz:\n");

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            scanf("%d", &mat1[i][j]);
        }
        printf("\n");
    }

    printf("Numero:\n");
    scanf("%d", &num);
    int cont = 0;
    for(int j = 0; j < tam; j++){
        int coluna = 0;
        for(int i = 0; i < tam; i++){
            if(mat1[i][j] == num){
                coluna = 1;

            }
        }
        if(coluna == 1)cont++;
    }
    printf("O numero aparece em %d coluna", cont);
    return 0;
}
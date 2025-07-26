/*8. Escreva um programa que leia uma matriz 6x10 de caracteres, na qual a primeira linha
representa o gabarito de uma prova e cada uma das demais linhas representa o cartão
de respostas de um candidato, e calcule o número de acertos de cada candidato.*/

#include <stdio.h>
#include <string.h>
#include <conio.h>
#define lin 4
#define col 5
void main(){
    char mat[lin][col];
    int notas[lin - 1] = {0};
    int gabarito[col];
    printf("Informe o gabarito e as demais repostas:\n");

    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            scanf(" %c", &mat[i][j]);
            if(i == 0){
                gabarito[j] = mat[i][j];
            } else {
                if(mat[i][j] == gabarito[j]){
                    notas[i - 1]++;
                }
            }
        }
        printf("\n");
    }

    for(int i = 0; i < lin - 1; i++){
        printf("Aluno %d: %d/%d\n", i + 1, notas[i], col);
    }

    getch();
}
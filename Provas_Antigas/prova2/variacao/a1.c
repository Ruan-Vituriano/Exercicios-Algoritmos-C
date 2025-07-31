/*Homem que calculava*/

#include <stdio.h>
#include <conio.h>

void main(){
    int N;
    printf("Tamanho do tabuleiro: ");
    scanf("%d", &N);
    int tab[N][N];
    int graos = 1;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            tab[i][j] = graos;
            graos *= 2;
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }

    getch();
}
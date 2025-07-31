/*maior num nas linhas*/

#include <stdio.h>
#include <conio.h>
const int ordem = 3; 
void main(){
    float mat[ordem][ordem];
    printf("Informe a matriz:\n");

    for(int i = 0; i < ordem; i++){
        for(int j = 0; j < ordem; j++){
            scanf("%f", &mat[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < ordem; i++){
        float maior = mat[i][0];
        for(int j = 0; j < ordem; j++){
            float atual = mat[i][j];
            if(atual > maior){
                maior = atual;
            }
        }
        printf("Linha %d: %.1f\n", i + 1, maior);
    }
    getch();
}
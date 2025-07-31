/*soma linhas*/
#include <stdio.h>
const int ordem = 2;
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
        float soma = 0;
        for(int j = 0; j < ordem; j++){
            soma += (float)mat[i][j];
        }
        printf("Linha %d: %.1f\n", i, soma);
    }

    getch();
}
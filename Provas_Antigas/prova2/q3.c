/*soma das linhas*/

#include <stdio.h>
const int ordem = 3;
float somaLinha(float matriz[ordem][ordem], int linha){
    float soma = 0;
    for(int i = 0; i < ordem; i++){
        soma += (float)matriz[linha][i];
    }
    return soma;
}

void main(){
    float mat[ordem][ordem];
    printf("Informe a matriz:\n");
    for(int i = 0; i < ordem; i++){
        for(int j = 0; j < ordem; j++){
            scanf("%f", &mat[i][j]);
        }
        printf("\n");
    }

    for(int i =0; i < ordem; i++){
        float somalinha = somaLinha(mat, i);
        printf("Soma linha %d: %.1f\n", i + 1, somalinha);
    }

    getch();
}
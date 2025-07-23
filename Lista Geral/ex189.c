/*189. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e  a seguir leia um número inteiro N entre 1 e 5 e verifique se a coluna N da matriz é  nula. 
*/

#include <stdio.h>
const int ordem = 2;
int main(){
    float matriz[ordem][ordem];
    int N;
    for(int i = 0; i < ordem; i++){
        for(int j = 0; j < ordem; j++){
            scanf("%f", &matriz[i][j]);
        }
    }
    printf("Coluna:\n");
    scanf("%d", &N);
    int nula = 1;
    for(int i = 0; i < ordem; i++){
        int num = matriz[i][N];
        if(num != 0){
            nula = 0;
        }
    }
    if(nula){
        printf("Coluna nula");
    }else {
        printf("Coluna nao nula");
    }

    return 0;
}
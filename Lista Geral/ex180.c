/*180. Escreva um programa que leia uma matriz quadrada de ordem 5 de números inteiros  e um inteiro N e verifique quantas vezes o número N aparece dentro da matriz.  
*/

#include <stdio.h>
const int ordem = 5;
int main(){
    int matriz[ordem][ordem];
    int N, cont = 0;

    printf("Informe a matriz:\n");

    for(int i = 0; i < ordem; i++){
        for(int j = 0; j < ordem; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Informe o N:\n");
    scanf("%d", &N);
    for(int i = 0; i < ordem; i++){
        for(int j = 0; j < ordem; j++){
            if(matriz[i][j] == N) cont++;
        }
    }


    printf("O numero %d aparece: %d vezes.", N, cont);

    return 0;
}
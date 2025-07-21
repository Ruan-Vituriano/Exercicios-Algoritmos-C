/*187. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e  a seguir leia um número inteiro N e determine a quantidade de números pares  existente na linha N.  
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
    printf("N: ");
    scanf("%d", &N);
    N--;
    int cont = 0;
    for(int i = 0; i < ordem; i++){
        int num = matriz[N][i];
        if(num % 2 == 0){
            cont++;
        }
    }
    N++;
    printf("Quantidade de pares na linha: %d eh: %d", N, cont);
    return 0;
}
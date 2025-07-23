/*188. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e  a seguir leia um número inteiro N e determine a quantidade de números primos na  coluna N.  
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
        int num = matriz[i][N];
        int primo = 1;
        int div = 2;
        while(div < num){
            if(num % div == 0 || num == 1){
                primo = 0;
            }
            div++;
        }    
        if(primo == 1 && num > 1){
            cont++;
        }
    }
    N++;
    printf("Quantidade de pares na linha: %d eh: %d", N, cont);
    return 0;
}
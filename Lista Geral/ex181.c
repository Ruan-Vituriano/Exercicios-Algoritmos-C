/*181. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e  a seguir leia um número inteiro N entre 1 e 5 e imprima os N primeiros elementos da  sua diagonal principal.  
*/

#include <stdio.h>
const int ordem = 3;

int main(){
    int matriz[ordem][ordem];
    int N;

    for(int i = 0; i < ordem; i++){
        for(int j = 0; j < ordem; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Informe o N:\n");
    scanf("%d", &N);
    
        for(int i = 0; i < N; i++){
            printf("%d", matriz[i][i]);
        }
    
    return 0;
}

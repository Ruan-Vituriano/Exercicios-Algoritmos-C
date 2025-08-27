/*275. Escreva um subprograma recursivo que receba como entrada um número inteiro N  não negativo e imprima a saída mostrada abaixo. O exemplo abaixo considera que N  é igual a 5. 
* 
** 
*** 
**** 
***** 
*/

#include <stdio.h>

void pontos(int N){
        if(N > 0){
        pontos(N - 1);
        for(int i = N; i > 0; i--){
            printf("*");
        }
        printf("\n"); 
        }
        
        
}

void main(){
    int N;
    scanf("%d", &N);
    pontos(N);
}
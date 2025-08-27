/*253. Escreva um subprograma recursivo que receba como entrada um número inteiro N  positivo e provoque um salto de N linhas na tela do usuário.  
*/
#include <stdio.h>

void espacos(int N){
    if(N <= 0){
        return;
    }
    printf("*\n");
    return espacos(N - 1);
}

void main(){
    int N;
    scanf("%d", &N);
    espacos(N);
}
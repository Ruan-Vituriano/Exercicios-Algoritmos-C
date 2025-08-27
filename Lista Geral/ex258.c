/*258. Escreva um subprograma recursivo que receba como entrada um valor em decimal e  imprima o seu valor correspondente em binário. 
*/

#include <stdio.h>

void bin(int N){
    if(N <= 0){
        return;
    }
    bin(N / 2);
    printf("%d", N % 2);
}

void main(){
    int N;
    scanf("%d", &N);
    bin(N);
}
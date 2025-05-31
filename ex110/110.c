#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int i;
    for(i= N - 1; i > 0; i--){
        N *= i;
    }
    printf("Fatorial: %d", N);
}
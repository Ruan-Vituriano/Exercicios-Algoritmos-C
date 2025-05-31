#include <stdio.h>

int main(){
    int M, N;
    scanf("%d%d", &M, &N);
    
    if(M == 0){
        printf("Nao eh possivel dividir por 0");
    } else if (N % M == 0){
        printf("eh multiplo de M");
    } else {
        printf("Nao eh multiplo de M");
    }
}
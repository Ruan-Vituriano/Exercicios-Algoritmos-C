#include <stdio.h>

void main(){
    int i, M, N, soma =0, cont =0;
    scanf("%d%d", &M, &N);
    if(M > N){
        int a;
        a = N;
        N = M;
        M = a;
    }    
    
    
        for(i=M; i <= N; i++){
            soma = soma + i;
            cont++;
        }

        float media = (float)soma / cont;


        printf("%f", media);
    
}
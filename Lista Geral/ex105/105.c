#include <stdio.h>

int main(){
    int i, M, N, soma =0;
    scanf("%d%d", &M, &N);
    if(M > N){
        int a;
        a = N;
        N = M;
        M = a;
    }    
    
    
        for(i=M; i <= N; i++){
            soma = soma + i;
        }
    
        printf("%d ", soma);

}
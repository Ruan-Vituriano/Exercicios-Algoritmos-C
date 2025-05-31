#include <stdio.h>

int main(){
    int M, N;
    scanf("%d%d", &M, &N);
    
    int k, i;
    int somaprimos = 0, contprimos = 0;
    for(k = M; k <= N; k++){
        int cont = 0;

        if(k < 2) continue;
        for(i = 1; i <= k; i++){
            if(k % i == 0){
            cont++;
        }
        }
        
        if(cont == 2){
            somaprimos += k;
            contprimos++;
        }

    }
    int media = somaprimos / contprimos;
    printf("A media eh: %d\n", media);

    return 0;
}
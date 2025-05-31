#include <stdio.h>

int main(){
    int M, N, X;

    printf("Informe M e N:\n");
    scanf("%d%d", &M, &N);
    printf("Informe X:\n");
    scanf("%d", &X);
    int i;
    int cont = 0;
    for(i = M; i <= N; i++){
        if(X % i == 0){
            printf("%d ", i);
        }
    }

    return 0;
}
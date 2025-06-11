#include <stdio.h>
int main(){
    int k, j, i, num, cont = 0;

    printf("Informe um numero: ");
    scanf("%d", &num);
        
    for(k = num; k > 0; k--){
        for(i = 0; i < cont; i++){
            printf(" ");
        }


        for(j = 1; j <= k; j++){
            printf("*");
        }
        printf("\n");
        cont++;
    }


    return 0;
}
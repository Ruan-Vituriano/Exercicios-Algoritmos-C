/*
num
*
**
***
****
*****
*/

#include <stdio.h>

void pontos(int num){
    if(num > 0){
        pontos(num - 1);
        for(int i = 0; i < num; i++){
            printf("*");
        }
        printf("\n");
    }
}

void main(){
    int n;
    scanf("%d", &n);
    pontos(n);
}
#include <stdio.h>

void main(){
    float x, y;
    scanf("%f%f", &x, &y);
    if(y == 2*x+1){
        printf("O ponto pertence a reta Y");
    } else {
        printf("O ponto nao pertence a reta Y");
    }
}

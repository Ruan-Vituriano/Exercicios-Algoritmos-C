#include <stdio.h>
#include <conio.h>

void main(){
    float num;
    scanf("%f", &num);
    if(num<0){
        num = num * (-1);
        printf("Valor absoluto: %.0f", num);
    } else {
        printf("Valor absoluto: %.0f", num);
    }
    getch();
}
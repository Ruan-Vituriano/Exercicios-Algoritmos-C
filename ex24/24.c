#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){
    float a1, r;
    printf("digite o termo inicial e a razao:\n");
    scanf("%f%f", &a1, &r);
    // an = a1 + (n - 1)r
    float a5 = a1 + (5.0 - 1.0) * r;
    printf("O Enesimo termo dessa PA eh:%f", a5);
    getch();
}
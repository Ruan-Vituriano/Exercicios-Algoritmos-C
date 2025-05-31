#include <stdio.h>
#include <conio.h>
#include <math.h>
const float dolar = 5.87;
int main(){
    float real;
    printf("Informe o valor em real\n");
    scanf("%f", &real);
    float res = real / dolar;
    printf("Resultado: %.2f$", res);
    getch();
}
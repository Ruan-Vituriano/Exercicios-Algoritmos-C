#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
    float base, altura;
    printf("Informe o valor da base e da altura:");
    scanf("%f%f", &base, &altura);
    float area = (base * altura) / 2;
    printf("Area: %.2f", area);
    getch();
}
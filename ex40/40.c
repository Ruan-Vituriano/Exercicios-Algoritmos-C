#include <stdio.h>
#include <conio.h>

void main(){
    float gasto;
    printf("Informe o valor gasto no restaurante:\n");
    scanf("%f", &gasto);
    float total = (gasto * 1.1) + 10;
    printf("O valor final foi: %.2f$", total);

}
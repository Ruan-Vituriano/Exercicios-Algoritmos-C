#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){
    float area, valor;
    printf("Digite a area do terreno e o valor do metro quadrado:\n");
    scanf("%f%f", &area, &valor);
    float custo = area * valor;
    printf("Custo: %.2f\n", custo);
}
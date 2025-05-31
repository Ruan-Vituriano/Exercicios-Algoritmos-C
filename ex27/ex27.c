#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){
    float comp, larg, litros;
    printf("Digite o comprimento a largura e a quantidade de litros\n");
    scanf("%f%f%f", &comp, &larg, &litros);
    // c * l * a = l
    float altura = (litros / 1000.0) / (comp * larg);
    printf("A altura eh: %.2f", altura);
    getch();
}
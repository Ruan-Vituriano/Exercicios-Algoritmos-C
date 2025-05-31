#include <stdio.h>
#include <conio.h>

void main(){
    float pp, lucro;
    printf("Digite o preco do produto e a margem de lucro:\n")/
    scanf("%f%f", &pp, &lucro);
    float pproduto = pp * (1 + lucro / 100);
    printf("Preco do produto sera: %.2f.", pproduto);
    getch();
}
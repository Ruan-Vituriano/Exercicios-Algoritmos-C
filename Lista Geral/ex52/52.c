#include <stdio.h>

void main() {
    float dados;
    printf("Informe os dados usados:\n");
    scanf("%f", &dados);
    float quantidade = dados - 100;
    float taxa = quantidade * 5;
    float total = 80 + taxa;
    printf("O valor a ser pago eh: %.1f", total);
}
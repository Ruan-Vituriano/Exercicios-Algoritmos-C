#include <stdio.h>

void main(){
    float vatual, vantigo;
    printf("Informe o valor atual e o anterior da energia:\n");
    scanf("%f%f", &vatual, &vantigo);
    float vconsu = vatual - vantigo;
    float valor =  vconsu * 0.35;
    float icms = valor * 0.17;
    float vtotal = icms + valor + 15;
    printf("O valor da conta eh: %.2f", vtotal);
}
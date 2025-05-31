#include <stdio.h>

void main(){
    float empre, quant;
    printf("Informe o valor do emprestimo e as parcelas:\n");
    scanf("%f%f", &empre, &quant);
    float total = empre * 1.04;
    float parc = total / quant;
    printf("Valor da parcela: %.2f$\nTotal: %.2f", parc, total);
}
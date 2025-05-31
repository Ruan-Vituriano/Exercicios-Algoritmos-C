#include <stdio.h>
const float carga = 160;
const float extra = 1.5;

int main(){
    float horas, valor;

    printf("Digite a quantidade de horas:\n");
    scanf("%f", &horas);
    printf("Digite o valor:\n");
    scanf("%f", &valor);

    float salbase = carga * valor;

    float horasex = (horas - carga) * (valor * extra);

    float pagamento = salbase + horasex;

    printf("O pagamento sera: %.2f", pagamento);
}
#include <stdio.h>

int main() {
    float valor_reais, milhas, valor_desejado;

    printf("Digite o valor da passagem em reais e em milhas:\n");
    scanf("%f %f", &valor_reais, &milhas);

    printf("Digite o valor da passagem que Caio deseja comprar:\n");
    scanf("%f", &valor_desejado);

    float milhas_necessarias = (valor_desejado * milhas) / valor_reais;

    printf("Caio precisa de %.2f milhas para comprar a passagem.\n", milhas_necessarias);

    return 0;
}

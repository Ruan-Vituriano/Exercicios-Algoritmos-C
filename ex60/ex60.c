#include <stdio.h>

int main() {
    int num_pessoas;
    int i;
    float total_gramas = 0;
    float total_kg;

    printf("Digite o número de pessoas no churrasco: ");
    scanf("%d", &num_pessoas);

    // Para cada pessoa, soma 250 gramas
    for (i = 0; i < num_pessoas; i++) {
        total_gramas += 250; // cada pessoa consome 250g
    }

    total_kg = total_gramas / 1000; // converte para quilos

    printf("Compre %.2f kg de carne.\n", total_kg);

    return 0;
}

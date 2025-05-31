#include <stdio.h>

int main() {
    int a, b, c;
    int maior, menor;

    // Entrada
    printf("Digite tres numeros inteiros distintos:\n");
    scanf("%d %d %d", &a, &b, &c);

    // Inicializa os valores
    maior = a;
    menor = a;

    // Verifica o maior
    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }

    // Verifica o menor
    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }

    // Saída
    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);

    return 0;
}

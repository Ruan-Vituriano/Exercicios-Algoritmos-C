#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero entre 1 e 10: ");
    scanf("%d", &numero);

    switch (numero) {
        case 1: printf("Um\n"); break;
        case 2: printf("Dois\n"); break;
        case 3: printf("Tres\n"); break;
        case 4: printf("Quatro\n"); break;
        case 5: printf("Cinco\n"); break;
        case 6: printf("Seis\n"); break;
        case 7: printf("Sete\n"); break;
        case 8: printf("Oito\n"); break;
        case 9: printf("Nove\n"); break;
        case 10: printf("Dez\n"); break;
        default: printf("Numero fora do intervalo de 1 a 10.\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int mes;

    printf("Digite um número de 1 a 12 correspondente a um mês do ano: ");
    scanf("%d", &mes);

    if (mes >= 1 && mes <= 3) {
        printf("1º trimestre\n");
    } else if (mes >= 4 && mes <= 6) {
        printf("2º trimestre\n");
    } else if (mes >= 7 && mes <= 9) {
        printf("3º trimestre\n");
    } else if (mes >= 10 && mes <= 12) {
        printf("4º trimestre\n");
    } else {
        printf("Número inválido! Digite um valor entre 1 e 12.\n");
    }

    return 0;
}

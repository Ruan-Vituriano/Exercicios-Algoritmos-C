#include <stdio.h>

int main() {
    int N, i, j;

    printf("Digite o número de linhas da pirâmide: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        // Espaços antes dos números
        for (j = 1; j <= N - i; j++) {
            printf(" ");
        }

        // Números crescentes
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Números decrescentes
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

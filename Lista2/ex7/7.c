//Escreva um programa que leia dois números inteiros M e N e imprima todos os números do intervalo [M, N].

#include <stdio.h>

int main() {
    int M, N;

    printf("Digite o valor de M: ");
    scanf("%d", &M);

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    if (M <= N) {
        for (int i = M; i <= N; i++) {
            printf("%d ", i);
        }
    } else {
        for (int i = M; i >= N; i--) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}

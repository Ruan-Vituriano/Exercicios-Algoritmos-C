#include <stdio.h>

int produto(int x, int y) {
    if (y == 0) // caso base
        return 0;
    if (y > 0) // multiplicação positiva
        return x + produto(x, y - 1);
    else // caso y seja negativo
        return -produto(x, -y);
}

int main() {
    int x, y;

    printf("Digite dois numeros inteiros (x e y): ");
    scanf("%d %d", &x, &y);

    printf("Produto: %d\n", produto(x, y));

    return 0;
}

#include <stdio.h>

int main() {
    char original1, cifrada1, original2;

    printf("Digite a primeira letra original, a correspondente cifrada e outra letra original:\n");
    scanf(" %c %c %c", &original1, &cifrada1, &original2);

    // Calcula deslocamento entre as duas primeiras letras
    int deslocamento = (cifrada1 - original1 + 26) % 26;

    // Aplica o mesmo deslocamento na terceira letra
    char nova_letra = ((original2 - 'a' + deslocamento) % 26) + 'a';

    printf("A letra substituta de '%c' eh '%c'\n", original2, nova_letra);

    return 0;
}
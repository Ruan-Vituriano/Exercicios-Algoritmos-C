#include <stdio.h>

int main() {
    char ch;

    printf("Digite um caractere: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("Letra maiuscula.\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Letra minuscula.\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("Numeral.\n");
    } else {
        printf("Nenhum dos tipos anteriores.\n");
    }

    return 0;
}

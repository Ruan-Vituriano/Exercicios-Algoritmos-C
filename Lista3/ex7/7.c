#include <stdio.h>
#include <string.h>

int main() {
    char texto[100]; // Tamanho suficiente para a maioria dos textos
    char x, y;

    // Lê o texto
    printf("Digite o texto: ");
    fgets(texto, sizeof(texto), stdin);

    // Remove o '\n' que o fgets pode adicionar
    texto[strcspn(texto, "\n")] = '\0';

    // Lê os caracteres x e y
    printf("Digite o caractere a ser substituído (x): ");
    scanf(" %c", &x); // espaço antes de %c para ignorar o Enter anterior

    printf("Digite o novo caractere (y): ");
    scanf(" %c", &y);

    // Substitui x por y no texto
    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == x) {
            texto[i] = y;
        }
    }

    // Exibe o resultado
    printf("Texto modificado: %s\n", texto);

    return 0;
}

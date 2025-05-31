#include <stdio.h>
#include <string.h>

int main() {
    char texto[101];  // até 100 caracteres + '\0'
    char letra;
    int contador = 0;

    printf("Digite um texto (até 100 caracteres): ");
    fgets(texto, sizeof(texto), stdin);  // lê a linha inteira

    printf("Digite uma letra: ");
    scanf(" %c", &letra);  // espaço antes do %c para ignorar '\n'

    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == letra) {
            contador++;
        }
    }

    printf("A letra '%c' aparece %d vezes no texto.\n", letra, contador);

    return 0;
}

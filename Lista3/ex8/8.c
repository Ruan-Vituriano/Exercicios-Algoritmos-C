/*Escreva um programa que leia um texto e o converta para letras minúsculas. Por
exemplo, se o texto informado for “Pedro mora em Cajazeiras há 2 anos e gosta de
estudar IA”, ele deve ser modificado para “pedro mora em cajazeiras há 2 anos e gosta
de estudar ia” Para resolver essa questão, você não pode usar nenhuma função de
conversão para minúsculo. Como dica, você deve usar as posições dos caracteres na
tabela ASCII.*/

#include <stdio.h>

int main() {
    char texto[1000];

    printf("Digite o texto:\n");
    fgets(texto, sizeof(texto), stdin);

    // Converte para minúsculas usando a tabela ASCII
    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] >= 'A' && texto[i] <= 'Z') {
            texto[i] = texto[i] + 32;
        }
    }

    printf("Texto em letras minúsculas:\n%s", texto);

    return 0;
}

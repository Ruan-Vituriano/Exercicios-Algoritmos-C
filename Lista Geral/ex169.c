/*169. Escreva um programa que leia um texto digitado pelo usuário até ler o caractere  enter, que não deve ser processado. O programa deve imprimir quantas vezes cada  letra foi digitada. (lembre-se, os caracteres ‘a’ e ‘A’) representam uma única letra. Se  você for usar a linguagem pascal, use o comando readkey para a leitura dos dados.  
*/

#include <stdio.h>
#include <string.h>

int main() {
    int contagem[26] = {0}; // Inicializa todas as posições com 0
    char texto[100];
    
    printf("Informe um texto:\n");
    fgets(texto, sizeof(texto), stdin); // Lê o texto (incluindo espaços)

    int tam = strlen(texto);
    
    for(int i = 0; i < tam; i++) {
        char c = texto[i];
        // Verifica se é uma letra maiúscula e converte para minúscula
        if (c >= 'A' && c <= 'Z') {
            c = c + ('a' - 'A'); // Equivalente a c = c + 32
        }
        // Se for uma letra minúscula, incrementa sua contagem
        if (c >= 'a' && c <= 'z') {
            contagem[c - 'a']++;
        }
    }
    
    // Imprime a contagem de cada letra
    for(int i = 0; i < 26; i++) {
        printf("%c: %d\n", 'a' + i, contagem[i]);
    }
    
    return 0;
}
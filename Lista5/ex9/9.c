/*
Escreva um programa que leia um texto de até 150 caracteres e informe a quantidade
de ocorrências de cada letra (dica: use um vetor para armazenar a quantidade de
ocorrências de cada letra).*/

#include <stdio.h>
#include <ctype.h> // Para tolower()

#define MAX 150

int main() {
    char texto[MAX + 1]; // +1 para o '\0'
    int contador[26] = {0}; // Inicializa todos com 0 (a-z)
    
    printf("Digite um texto (max %d caracteres):\n", MAX);
    fgets(texto, sizeof(texto), stdin);
    
    for (int i = 0; texto[i] != '\0'; i++) {
        char c = tolower(texto[i]); // Converte para minúscula
        if (c >= 'a' && c <= 'z') {
            contador[c - 'a']++; // Incrementa o contador da letra
        }
    }
    
    printf("\nOcorrencias de cada letra:\n");
    for (int i = 0; i < 26; i++) {
        if (contador[i] > 0) {
            printf("%c: %d\n", 'a' + i, contador[i]);
        }
    }
    
    return 0;
}
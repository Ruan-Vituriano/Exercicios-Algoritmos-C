#include <stdio.h>
#include <conio.h>
#include <string.h>
void main(){
    char nome[50];
    printf("Digite uma palavra:");
    scanf("%s", nome);
    int tam = strlen(nome);
    printf("Tamanho: %d\n", tam);
}
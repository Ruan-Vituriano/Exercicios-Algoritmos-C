#include <stdio.h>
#include <conio.h>
#include <ctype.h>
void main(){
    char nome[1];
    printf("Digite uma letra:\n");
    scanf("%s", &nome);
    char maiuscula = toupper(nome[0]);
    printf("Maiuscula: %c\n", maiuscula);
    getch();
}
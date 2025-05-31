/*Escreva um programa que leia um texto e em, seguida, leia um caractere x e remova todas as ocorrências do caractere x do texto. O novo texto deve ser armazenado em uma nova variável antes de ser informado para o usuário. Por exemplo, se o texto informado foi “banana” e o caractere x for “a”, o texto a ser informado deve ser “bnn”.*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(){
    char texto[100], novo_texto[100];
    char x;

    printf("Digite um texto:\n");
    fgets(texto, sizeof(texto), stdin);
    fflush(stdin);
    printf("Informe o x:\n");
    scanf("%c", &x);
    fflush(stdin);

    int j = 0;
    for(int i = 0; texto[i] != '\0'; i++){
        if(texto[i] != x){
            novo_texto[j] = texto[i];
            j++;
        }
    }

    printf("%s", novo_texto);
    fflush(stdin);
    return 0;
}
/*9. Escreva um programa que leia um texto de até 20 caracteres e o converta para lower case. A
conversão deve ser feita por meio de um subprograma e a função tolower não pode ser
utilizada.*/

#include <stdio.h>
#include <string.h>
const int tam = 20;

void textlower(char texto[], int tam){
    int i;
    for(i = 0; texto[i] != '\0'; i++){
        if(texto[i] >= 'A' && texto[i] <= 'Z'){
            printf("%c", texto[i] + 32);
        } else {
            printf("%c", texto[i]);
        }
    }
}

void main(){
    char palavra[tam];
    printf("Digite a palavra:\n");
    fgets(palavra, sizeof(palavra), stdin);
    textlower(palavra, tam);
}
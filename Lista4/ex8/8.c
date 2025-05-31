/*Escreva um programa que leia um texto e calcule a sua quantidade total de caracteres.
O programa deve ser resolvido sem a utilização da função strlen.
*/

#include <stdio.h>
#include <string.h>

void main(){
    char texto[100];
    printf("Informe um texto:\n");
    gets(texto);
    int i;
    for(i = 0; texto[i] != '\0'; i++){
        ///
    }
    printf("%d", i);
}
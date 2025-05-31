/*
Escreva um programa que leia um texto de até 100 caracteres e informe a quantidade
de cada uma das letras que aparecem no texto.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char texto[101];
    printf("Informe um texto:\n");
    fgets(texto, sizeof(texto), stdin);
    int tamanho = strlen(texto);
    for(int i = 'a'; i <= 'z'; i++){
        int cont = 0;
        for(int k = 0; k < tamanho; k++){
            if(texto[k] == i || texto[k] == i - 32){
                cont++;
            }
        }
        printf("Letra %c: %d\n", i, cont);
    }


    return 0;
}
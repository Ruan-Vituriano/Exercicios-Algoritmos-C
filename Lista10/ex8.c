/*Escreva um programa que leia uma palavra de até 15 caracteres e, em seguida, leia dois
caracteres x e y e, na palavra informada, substitua todas as ocorrências do caractere x pelo
caractere y. Por exemplo, se a palavra for banana e os caracteres x e y, forem,
respectivamente, as letras ‘a’ e ‘e’, a palavra deve ser modificada para benene. A modificação
da palavra deve ser feita por meio de um subprograma.*/

#include <stdio.h>
#include <string.h>
const int tam = 15;

void troca(char palavra[], int tam, char A, char B){
    int i;
    for(i = 0; palavra[i] != '\0'; i++){
        if(palavra[i] == A){
            printf("%c", B);
        } else {
            printf("%c", palavra[i]);
        }
    }
}

void main(){
    char palavra[tam], A, B;
    printf("Digite a palavra:\n");
    fgets(palavra, sizeof(palavra), stdin);
    printf("Letra A e B:\n");
    scanf(" %c", &A);
    scanf(" %c", &B);
    troca(palavra, tam, A, B);
}
/*10. Escreva um programa que leia um texto de até 20 caracteres e verifique quantas letras
minúsculas foram informadas no texto. A verificação deve ser feita por meio de uma função.*/

#include <stdio.h>
const int tam = 20;

int minusculas(char *palavra){
    int cont = 0;
    for(int i = 0; palavra[i] != '\0'; i++){
        if(palavra[i] >= 'a' && palavra[i] <= 'z'){
            cont++;
        }
    }

    return cont;
}

void main(){
    char palavra[tam];
    printf("Informe a primeira palavra:\n");
    fgets(palavra, tam, stdin);
    int letras_minusculas = minusculas(palavra);
    printf("Letras minusculas: %d", letras_minusculas);
}


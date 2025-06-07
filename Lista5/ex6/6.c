/*Escreva um programa que leia dois strings de até 10 caracteres e copie o valor do
segundo string para o primeiro. O programa deve ser resolvido sem a utilização de
qualquer função para a manipulação de strings.*/

#include <stdio.h>
#include <string.h>

int main(){
    char nome1[11];
    char nome2[11];
    char letra;
    printf("Informe o primeiro nome: ");
    fgets(nome1, sizeof(nome1), stdin);

    printf("Informe o segundo nome: ");
    fgets(nome2, sizeof(nome2), stdin);

    for(int i = 0; i < 9; i++){
        for(int k = 'a'; k <= 'z'; k++){
            if(k == nome2[i]){
                letra = k;
                nome1[i] = letra;
            }
            if((k - 32) == nome2[i]){
                letra = k - 32;
                nome1[i] = letra;
            }
        }
    }

    printf("Primeiro nome: %s\n", nome1);
    printf("Segundo nome: %s", nome2);
    return 0;
}
/*Escreva um programa que leia duas palavras de até 20 caracteres cada e verifique quantas
letras essas palavras possuem em comum. A verificação deve ser feita por meio de uma
função.*/

#include <stdio.h>
const int tam = 20;

int semelhantes(char *palavra1, char *palavra2){
    int cont = 0;

    for(char i = 'a'; i <= 'z'; i++){
        int vdd1 = 0, vdd2 = 0;

        for(int j = 0; palavra1[j] != '\0'; j++){
            if(i == palavra1[j]){
                vdd1 = 1;
            }
        }

        for(int j = 0; palavra2[j] != '\0'; j++){
        if(i == palavra2[j]){
                vdd2 = 1;
            }
        }

        if(vdd1 ==1 && vdd2 == 1){
            cont++;
        }
    }

    return cont;
}

void main(){
    char palavra1[tam], palavra2[tam];
    printf("Informe a primeira palavra 1:\n");
    fgets(palavra1, tam, stdin);
    printf("Informe a primeira palavra 2:\n");
    fgets(palavra2, tam, stdin);
    int palavras = semelhantes(palavra1, palavra2);
    printf("Letras iguais: %d", palavras);

}
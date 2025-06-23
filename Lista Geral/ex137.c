/* Escreva um programa que leia um número inteiro positivo e calcule o número de  algarismos deste número. */

#include <stdio.h>
int main(){
    int num, cont = 0;
    scanf("%d", &num);
    printf("O numero %d", num);
    do {
        num /= 10;
        cont++;
    } while(num != 0);
    printf(" tem %d algarismos.", cont);
    return 0;
}
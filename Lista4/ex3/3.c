/*Escreva um programa que leia vários números inteiros e calcule a média aritmética
dos números informados pelo usuário. O processo de leitura dos números deve ser
encerrado quando a soma dos números informados for maior ou igual a 50.*/

#include <stdio.h>

void main(){
    int soma = 0, cont = 0;
    while(soma < 50){
        int num;
        printf("Informe um numero: ");
        scanf("%d", &num);

        soma += num;
        cont++;
    }
    printf("A media aritmetica eh: %.1f", (float)soma / cont);
}
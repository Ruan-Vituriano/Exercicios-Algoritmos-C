/*
Escreva um programa que leia 10 números inteiros e, para cada valor informado,
informe se ele é positivo, negativo ou neutro. Ao fim da leitura, o programa deve
informar qual dessas categorias teve uma maior quantidade de números informados.*/

#include <stdio.h>
const int qntd = 5;
int main(){
    int neutro = 0, positivo = 0, negativo = 0;
    for(int i = 1; i <= qntd; i++){
        int num;
        printf("Informe um numero: ");
        scanf("%d", &num);

        if(num == 0){
            printf("Neutro\n");
            neutro++;
        } else if(num > 0) {
            printf("Positivo\n");
            positivo++;
        } else {
            printf("Negativo\n");
            negativo++;
        }
    }
    printf("Neutros: %d\nPositivos: %d\nNegativos: %d", neutro, positivo, negativo);
}
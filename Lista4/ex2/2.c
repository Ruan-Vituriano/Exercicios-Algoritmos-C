/*Escreva um programa que leia 10 números inteiros e calcule a quantidade de números
pares e a quantidade de números ímpares.*/

#include <stdio.h>

void main(){
    int cont = 0, cont_par = 0, cont_impar = 0;
    while(cont < 10){
        int num; 
        printf("Informe um numero: ");
        scanf("%d", &num);

        if(num % 2 == 0){
            cont_par++;
        } else {
            cont_impar++;
        }
        cont++;
    }

    printf("Pares: %d\nImpares: %d", cont_par, cont_impar);
    

  

}
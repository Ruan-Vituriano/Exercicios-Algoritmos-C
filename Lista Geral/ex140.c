/*Escreva um programa que leia vários números inteiros e calcule a média dos  números pares e a média dos números ímpares. O processamento deverá ser  encerrado quando for lido o valor 0, que não deverá ser processado.  */

#include <stdio.h>

void main(){
    float contimpar = 0, somaimpar = 0;
    float contpar = 0, somapar = 0;
    int num;
    do{ 
        
        scanf("%d", &num);
        if(num % 2 == 0 && num != 0){
            contpar++;
            somapar += num;
        } else if (num % 2 != 0 && num != 0){
            contimpar++;
            somaimpar += num;
        }
       
    }while(num != 0);
    printf("Media dos pares: %.1f\n", (float)somapar / contpar);
    printf("Media dos impares: %.1f\n", (float)somaimpar / contimpar);
    return 0;
}
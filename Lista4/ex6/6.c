/*Escreva um programa que imprima todos os palíndromos que existem no intervalo
[1000,9999].*/

#include <stdio.h>

int main(){
    for(int num = 1000; num <= 9999; num++){
       
        int uni = num / 1000;

        int dez = (num % 1000) / 100;
        int cen = (num % 100) / 10;
        int mil = num % 10;

        int reverso = (mil * 1000) + (cen * 100) + (dez * 10) + uni;
        if(num == reverso){
            printf("%d ", num);
        }
    }
    return 0;
}


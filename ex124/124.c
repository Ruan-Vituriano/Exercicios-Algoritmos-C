/*124. Escreva um programa que imprima os seis primeiros pares de números primos  gêmeos. Dois números são chamados de primos gêmeos se eles forem primos e a  diferença entre os dois for igual a 2. (Por exemplo, 11 e 13 são primos gêmeos). */

#include <stdio.h>


int main(){
    int cont = 0; 
    int num = 3;

    while(cont < 6){
        int ehprimo = 1;
        int ehprimo2 = 1;
        for (int i = 2; i * i <= num; i++){
            if(num % i == 0){
                ehprimo = 0;
                break;
            }
        }
        for (int i = 2; i * i <= num + 2; i++){
            if((num + 2) % i == 0){
                ehprimo2 = 0;
                break;
            }     
        }
    if(ehprimo && ehprimo2){
        printf("(%d, %d)\n", num, num + 2);
        cont++;
        }

    num++;
    }

    return 0;
}
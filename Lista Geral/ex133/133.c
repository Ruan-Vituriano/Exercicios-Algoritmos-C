/*133. Escreva um programa que leia um número inteiro N e imprima a figura abaixo, onde N  é o número de elementos impressos na primeira linha. No exemplo abaixo, foi  considerado que N=5. 
*
** 
*** 
**** 
***** 
*/

#include <stdio.h>

int main(){
    int num;
    printf("Informe um numero: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        for(int k = 1; k <= i; k++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
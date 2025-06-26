/*Escreva um programa que leia dez números inteiros e calcule a diferença entre os  dois maiores números digitados pelo usuário.  */

#include <stdio.h>

void main(){
    int maior, segmaior;
    for(int i = 0; i < 10; i++){
        int num;
        scanf("%d", &num);
        if(i == 0){
            maior = num;
            segmaior = num;
        }else{
            if(num > maior){
                segmaior = maior;
                maior = num;
            } else if(num > segmaior && num < maior){
                segmaior = num;
            }
        }
    }
    int diferenca = maior - segmaior;
    printf("A diferenca entre %d e %d eh: %d", maior, segmaior, diferenca);

    getch();
}
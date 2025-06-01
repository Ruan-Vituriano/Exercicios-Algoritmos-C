/*
Escreva um programa que leia 10 números reais distintos e calcule o segundo maior  número lido. */

#include <stdio.h>
const int qntd = 4;
int main(){
    int num, maior, segundo;
    for(int i = 1; i <= qntd; i++){
        printf("Informe um numero: ");
        scanf("%d", &num);
        if(i == 1){
            maior = num;
            segundo = num;
        } else {
            if(num > maior){
                segundo = maior;
                maior = num;
        }

    }
   
    
}
    printf("%d", segundo);
    return 0;
}
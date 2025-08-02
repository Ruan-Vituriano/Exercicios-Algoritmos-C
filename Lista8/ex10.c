/*10. Escreva um programa que leia três números inteiros e calcule o mínimo múltiplo comum
desses números. O cálculo do MMC deve ser feito por meio de um subprograma.*/

#include <stdio.h>
#include <conio.h>

int mmc(int num1, int num2, int num3){
    int i = 2;
    int mmc = 1;
    do{

        if(num1 % i == 0 || num2 % i == 0 || num3 % i == 0){
            mmc *= i;
        }
        if(num1 % i == 0){
            num1 /= i;
        }
        if(num2 % i == 0){
            num2 /= i;
        }
        if(num3 % i == 0){
            num3 /= i;
        }
        


        i++;
    } while(num1 > 1 || num2 > 1 || num3 > 1);
    return mmc;
}


void main(){
    int num1, num2, num3;
    printf("Informe os 3 numeros:\n");
    scanf("%d%d%d", &num1, &num2, &num3);

    printf("MMC: %d", mmc(num1, num2, num3));

    getch();
}
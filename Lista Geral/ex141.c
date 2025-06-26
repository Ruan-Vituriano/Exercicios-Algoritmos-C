/*. Escreva um programa que leia três números inteiros positivos e calcule o MMC dos  números lidos.  */

#include <stdio.h>

void main(){
    int num1, num2, num3, k = 2;
    int mmc = 1;
    scanf("%d%d%d", &num1, &num2, &num3);
    while (num1 > 1 || num2 > 1 || num3 > 1){
            int dividido = 0;
            if (num1 % k == 0){
                num1 /= k;
                dividido = 1;
            }
            if (num2 % k == 0){
                num2 /= k;
                dividido = 1;
            }
            if (num3 % k == 0){
                num3 /= k;
                dividido = 1;
            }
            if(dividido){
                mmc *= k;
            } else {
                k++;
            }
            
    }
    
    printf("O MMC eh: %.1f", (float)mmc);
    return 0;
}
/*. Escreva um programa que leia um número inteiro entre 0 e 255 e calcule o seu valor  correspondente em binário.  */

#include <stdio.h>

int main(){
    int binario[64];
    int num;
    scanf("%d", &num);
    int original = num;
    int resto , i = 0;
    do{
        resto = num % 2;
        binario[i] = resto;
        num /= 2;
        i++;
    }while(num > 0);
    binario[i] = '\0';
    i--;
    printf("Numero %d em binario:\n", original);
    for(int k = 0; k <= i; k++){
        printf("%d", binario[i - k]);
    }
    return 0;
}
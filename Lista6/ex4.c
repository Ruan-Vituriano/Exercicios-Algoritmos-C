/*4. Escreva um programa que leia um número inteiro entre 0 e 255 e calcule o seu valor
correspondente em binário.*/
#include <stdio.h>

int main(){
    int num, vet[8];
    scanf("%d", &num);
    int i = 0;
    do{
        vet[i] = num % 2;
        num /= 2;
        i++;
    }while(num > 0);

    for(int j = i - 1; j >= 0; j--){
        printf("%d", vet[j]);
    }

    return 0;
}
#include <stdio.h>

int main(){
    int num;
    printf("Informe um valor inteiro: ");
    scanf("%d", &num);
    int ced50, ced20, ced10, resto;

    ced50 = num / 50;
    resto = num % 50;
    ced20 = resto / 20;
    resto = resto % 20;
    ced10 = resto / 10;

    printf("R$50: %d\n", ced50);
    printf("R$20: %d\n", ced20);
    printf("R$10: %d\n", ced10);
    return 0;
}
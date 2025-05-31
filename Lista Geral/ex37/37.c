#include <stdio.h>
#include <conio.h>

int main(){
    int num;
    printf("Digite um numero entre 1 e 9999\n");
    scanf("%d", &num);
    int uni_milhar = (num / 1000) * 1000;
    int centena = ((num % 1000) / 100) * 100;
    int dezena = ((num % 100) / 10) * 10;
    int unidade = num % 10;
    printf("Milhar: %d\nCentena: %d\nDezena: %d\nUnidade: %d", uni_milhar, centena, dezena, unidade);

}
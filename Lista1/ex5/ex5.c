#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    int unidade = num / 1000;
    int dezena = (num % 100) / 10;
    int centena = (num % 1000) / 100;
    int un_milhar = num % 10;
    int inverso = (un_milhar * 1000) + (centena * 100) + (dezena * 10) + unidade;

    if(num == inverso){
        printf("O numero e um palindromo");
    } else {
        printf("Nao eh um palindromo :()");
    }
    return 0;
}
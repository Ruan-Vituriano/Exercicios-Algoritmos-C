/*4. Escreva um programa que leia um número inteiro N e calcule a quantidade de algarismos
desse número. O cálculo da quantidade de algarismos deve ser feito por meio de um
subprograma.*/

#include <stdio.h>
#include <conio.h>

int qnt_algarismos(int num){
    int qnt = 0;
    do{
        num /= 10;
        qnt++;
    }while(num != 0);
    return qnt;
}

void main(){
    int num;
    printf("Informe o numero:\n");
    scanf("%d", &num);

    printf("Quantidade de algarismos: %d", qnt_algarismos(num));

    getch();
}
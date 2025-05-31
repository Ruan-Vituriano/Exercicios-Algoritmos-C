#include <stdio.h>
#include <conio.h>
const float taxa = 0.89;
void main(){
    float salario;
    scanf("%f", &salario);
    salario = salario * taxa;
    if(salario <= 1903.98){
        printf("Salario bruto: R$%.2f", salario);
    } else if(salario <= 2826.65){
        salario = salario * 0.925;
        printf("Salario bruto: R$%.2f", salario);
    } else if(salario <= 3751.05) {
        salario = salario * 0.85;
        printf("Salario bruto: R$%.2f", salario);
    } else if (salario <= 4664.68){
        salario = salario * 0.775;
        printf("Salario bruto: R$%.2f", salario);
    } else {
        salario = salario * 0.725;
        printf("Salario bruto: R$%.2f", salario);
    }
    getch();
}
/*2. Escreva um programa que leia o valor do lado de um quadrado e calcule a sua área e o seu
perímetro. O programa deve ter um subprograma para calcular a área e outro para calcular o
perímetro.*/

#include <stdio.h>
#include <conio.h>

float area_q(float lado){
    float area = lado * lado;
    return area;
}
float perimetro_q(float lado){
    float perimetro = lado * 4;
    return perimetro;
}


void main(){
    float lado;
    printf("Informe o lado do quadrado:\n");
    scanf("%f", &lado);

    printf("Area: %.1f\nPerimetro: %.1f", area_q(lado), perimetro_q(lado));

    getch();
}
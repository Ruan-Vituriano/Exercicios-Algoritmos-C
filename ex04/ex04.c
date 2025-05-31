#include <stdio.h>
#include <conio.h>
#include <math.h>

void main() {
    float num;
    printf("Escreva um numero:");
    scanf("%f", &num);
    float dobro = num * 2;
    float triplo = num * 3;
    float quadrado = num * num;
    float cubo = num * num * num;
    float raiz = sqrt(num);
    printf("Dobro:%.1f.\nTriplo:%.2f\nQuadrado:%.2f\nCubo:%.2f\nRaiz:%.2f.\n", dobro, triplo, quadrado, cubo, raiz);
    getch();

  
} 
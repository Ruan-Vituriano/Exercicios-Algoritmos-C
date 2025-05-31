#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){
    float x1, x2, y1, y2;
    printf("informe as coordenadas do ponto P:");
    scanf("%f%f", &x1, &y1);
    printf("escreva as coordenadas do ponto Q");
    scanf("%f%f", &x2, &y2);

    float dist = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    printf("A distancia eh:%.1f", dist);
    getch();    
}
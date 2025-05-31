#include <stdio.h>
#include <conio.h>
#include <math.h>
const float pi = 3.14;
void main(){
    float r;
    printf("Digite o raio da esfera:\n");
    scanf("%f", &r);
    // precisa ser 4.0 senão é reconhecido como inteiro
    float vol = (4.0 / 3.0) * pi * pow(r, 3);
    printf("O volume da esfera eh: %.2f", vol);
    getch(); 
}
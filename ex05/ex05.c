#include <stdio.h>
#include <conio.h>
#include <math.h>
const float PI = 3.14;
void main(){
    

    float raio;
    printf("Informe o valor do raio:");
    scanf("%f", &raio);
    float area = PI * pow(raio, 2);
    float compr = 2 * PI * raio;
    printf("Area: %.2f\nPerimetro:%.2f", area, compr);
    getch();
}
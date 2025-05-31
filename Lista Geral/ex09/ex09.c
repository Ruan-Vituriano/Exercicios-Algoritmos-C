#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
    float km, hora;
    printf("Informe o valor da distancia e do tempo:");
    scanf("%f%f", &km, &hora);
    float res = (km / hora) / 3.6;
    printf("Resultado: %.2f m/s", res);
    getch();
}
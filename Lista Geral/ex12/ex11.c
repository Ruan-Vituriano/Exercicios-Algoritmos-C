#include <stdio.h>
#include <conio.h>
#include <math.h>
const float pole = 2.54;
int main(){
    float valor;
    printf("Informe o valor:");
    scanf("%f", &valor);
    float res = valor * pole;
    printf("Resultado: %.2fcm", res);
    getch();
}
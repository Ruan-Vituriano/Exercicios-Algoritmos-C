#include <stdio.h>
#include <math.h>

void main(){
    float ang1, ang2;
    printf("Insira o valor dos dois angulos: ");
    scanf("%f%f", &ang1, &ang2);

    float ang3 = 180 - (ang1 + ang2);
    printf("O terceiro angulo vale: %.2f", ang3);
    getch();
}
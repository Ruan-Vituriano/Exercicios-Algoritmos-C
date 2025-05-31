#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
    float seno;
    printf("Digite o seno do angulo (entre 1 e -1): ");
    scanf("%f", &seno);
// cos(x)= raiz(1-sin^2(x))
    float cosseno = sqrt(1 - pow(seno, 2));
    printf("O cosseno do angulo eh: %.2f", cosseno);
    getch();

}
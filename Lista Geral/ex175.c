/*Escreva um programa que leia dois vetores de três números reais cada e calcule o
valor absoluto cosseno do ângulo formado pelos dois vetores. O cosseno do ângulo
formado por dois vetores u = (x1, x2, ..., xN) e v = (y1, y2, ..., yN) é calculado através da
seguinte fórmula:*/

#include <stdio.h>
#include <math.h>
const int tam = 3;
int main(){
    float vet1[tam], vet2[tam];
    float mod1 = 0, mod2 = 0;
    for(int i = 0; i < tam; i++){
        scanf("%f", &vet1[i]);
        mod1 += vet1[i] * vet1[i]; 
    }
    mod1 = sqrt(mod1);
    printf("\nMatriz 2:\n");
    for(int i = 0; i < tam; i++){
        scanf("%f", &vet2[i]);
        mod2 += vet2[i] * vet2[i]; 
    }
    mod2 = sqrt(mod2);
    float produto = 0;
    for(int i = 0; i < tam; i++){
        produto += vet1[i] * vet2[i];
    }
    float mod = mod1 * mod2;
    float cos = produto / mod;

    printf("Cosseno do angulo: %.1f", cos);


    return 0;
}
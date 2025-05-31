#include <stdio.h>

void main(){
    float peso, altura;
    printf("Informe o peso e a altura:\n");
    scanf("%f%f", &peso, &altura);
    float imc = peso / pow(altura, 2);
    printf("O IMC eh: %.2f", imc);
    
}
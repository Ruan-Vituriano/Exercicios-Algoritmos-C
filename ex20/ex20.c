#include <stdio.h>
const float vt = 300;
int main(){
    float compr, larg;
    printf("Insira o comprimento e a largura do terreno:\n");
    scanf("%f%f", &compr, &larg);

    float valor = vt * (compr * larg);
    printf("O valor do terreno eh: %2.f", valor);
    getch();
}
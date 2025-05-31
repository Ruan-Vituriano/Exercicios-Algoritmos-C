//14km - 1L 
#include <stdio.h>
#include <conio.h>
const float preco = 6.78;

void main(){
    float dist;
    printf("Digite a distancia da viagem:\n");
    scanf("%f", &dist);
    float gasto = (dist / 14) * preco;
    printf("O gasto de combustivel sera: %.1f", gasto);
    getch();
}
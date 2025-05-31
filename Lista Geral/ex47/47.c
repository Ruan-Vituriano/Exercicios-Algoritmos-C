#include <stdio.h>

void main(){
    float valor;
    printf("Informe o valor:\n");
    scanf("%f", &valor);
    float prim = valor * 0.2;
    float seg = prim * 1.07;
    float terc = seg * 1.07;
    float quar = terc * 1.07;
    float quin = quar * 1.07;
    float total = prim + seg + terc + quar + quin;
    float juros = total - valor;
    printf("Prestacoes:\n%.2f\n%.2f\n%.2f\n%.2f\n%.2f\n\n", prim, seg, terc, quar, quin);
    printf("Total a ser pago: %.2f\nJuros: %.2f", total, juros);

}
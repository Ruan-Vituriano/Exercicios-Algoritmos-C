#include <stdio.h>
#include <conio.h>

void main(){
    float tquest, acerto;
    printf("Informe o total e o numero de acertos:");
    scanf("%f%f", &tquest, &acerto);
    float acertos = (acerto / tquest) * 100.0;
    float erros = 100 - acertos;
    printf("Porcentagem de acertos: %.0f%%\nPorcentagem de erros:%.0f%%", acertos, erros);
    getch();
}
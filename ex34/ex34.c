#include <stdio.h>
#include <conio.h>

int main(){
    int dcompra, pentrega;
    printf("Informe o dia da compra e o prazo de entrega:");
    scanf("%d%d", &dcompra, &pentrega);
    int dia = (dcompra + pentrega) % 30;
    printf("O dia que recebera sera dia:%d", dia);
    getch();
}
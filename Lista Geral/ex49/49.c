#include <stdio.h>

void main(){
    float preco;
    printf("Informe o preco do veiculo\n");
    scanf("%f", &preco);
    float taxas = preco / 1.57;
    float valorf = taxas * 1.37;
    printf("Preco do veiculo: %.2f", valorf);
}
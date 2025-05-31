#include <stdio.h>

void main(){
    float acao1, acao2;
    printf("Digite a acao atual e a anterior\n");
    scanf("%f%f", &acao1, &acao2);
    float variacao = ((acao1 / acao2) - 1) * 100;
    printf("O percentual de variacao eh: %.1f%%", variacao);

}
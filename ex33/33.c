// porcentagem de votos
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){
    // cd = candidato
    float cd1, cd2, cd3;
    printf("Digite a quantidade de votos dos 3 canditados:");
    scanf("%f%f%f", &cd1, &cd2, &cd3);
    float qnt_votos = cd1 + cd2 + cd3;
    float res1 = (cd1 / qnt_votos) * 100;
    float res2 = (cd2 / qnt_votos) * 100;
    float res3 = (cd3 / qnt_votos) * 100;

    printf("O percentual dos tres candidatos eh:\n%.1f%%\n%.1f%%\n%.1f%%", res1, res2, res3);
    getch();
}
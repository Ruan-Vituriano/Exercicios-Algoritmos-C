/*
Recentemente, os cientistas descobriram o que muitas pessoas já desconfiavam: o
talento para a programação está no DNA, por meio dos cromossomos ADS. Os
cientistas descobriram que as pessoas que apresentam os cromossomos ADS em
sequência possuem uma alta aptidão para a programação. As pessoas que
apresentam os cromossomos ADS nessa ordem, mas não em sequência, possuem
aptidão média. Por fim, as pessoas que não apresentam os cromossomos ADS nessa
ordem possuem baixa aptidão para a programação. Com base nessas informações,
escreva um programa que leia a sequência dos cromossomos de uma pessoa e
verifique qual a sua aptidão para a programação. Para isso, considere que a sequência
de cromossomos de uma pessoa é uma sequência composta por dez letras
maiúscula. Por exemplo, se a pessoa tiver uma sequência de cromossomos
ABCXDADSZW, ela tem alta aptidão para a programação. Se a pessoa tiver uma
sequência de cromossomos AXXYDRESWS, ela tem uma aptidão média. Por fim, se ela
tiver uma sequência RTSDADXRTE, ela tem baixa aptidão.*/

#include <stdio.h>
#include <string.h>

int main() {
    char texto[11];
    printf("Informe uma sequência de 10 letras maiúsculas:\n");
    fgets(texto, sizeof(texto), stdin);

    // Remove o '\n' se estiver presente
    texto[strcspn(texto, "\n")] = '\0';

    int len = strlen(texto);
    int alta = 0;

    // Verifica aptidão alta (sequência "ADS")
    for (int i = 0; i < len - 2; i++) {
        if (texto[i] == 'A' && texto[i + 1] == 'D' && texto[i + 2] == 'S') {
            alta = 1;
        }
    }

    if (alta) {
        printf("Aptidao alta!\n");
    } else {
        // Verifica aptidão média (A antes de D antes de S, em qualquer posição)
        int posA = -1, posD = -1, posS = -1;

        for (int i = 0; i < len; i++) {
            if (texto[i] == 'A' && posA == -1) {
                posA = i;
            }
            if (texto[i] == 'D' && posA != -1 && i > posA && posD == -1) {
                posD = i;
            }
            if (texto[i] == 'S' && posD != -1 && i > posD && posS == -1) {
                posS = i;
            }
        }

        if (posA != -1 && posD != -1 && posS != -1) {
            printf("Aptidao media!\n");
        } else {
            printf("Aptidao baixa!\n");
        }
    }

    return 0;
}

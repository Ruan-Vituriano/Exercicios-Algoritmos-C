#include <stdio.h>

int main() {
    int numero, centenas, dezenas, unidades;

    printf("Digite um número entre 1 e 999: ");
    scanf("%d", &numero);

    if (numero < 1 || numero > 999) {
        printf("Número fora do intervalo permitido.\n");
        return 1;
    }

    // Quebrando o número em centenas, dezenas e unidades
    centenas = numero / 100;
    dezenas = (numero % 100) / 10;
    unidades = numero % 10;

    // Centenas
    if (centenas == 1) printf("C");
    else if (centenas == 2) printf("CC");
    else if (centenas == 3) printf("CCC");
    else if (centenas == 4) printf("CD");
    else if (centenas == 5) printf("D");
    else if (centenas == 6) printf("DC");
    else if (centenas == 7) printf("DCC");
    else if (centenas == 8) printf("DCCC");
    else if (centenas == 9) printf("CM");

    // Dezenas
    if (dezenas == 1) printf("X");
    else if (dezenas == 2) printf("XX");
    else if (dezenas == 3) printf("XXX");
    else if (dezenas == 4) printf("XL");
    else if (dezenas == 5) printf("L");
    else if (dezenas == 6) printf("LX");
    else if (dezenas == 7) printf("LXX");
    else if (dezenas == 8) printf("LXXX");
    else if (dezenas == 9) printf("XC");

    // Unidades
    if (unidades == 1) printf("I");
    else if (unidades == 2) printf("II");
    else if (unidades == 3) printf("III");
    else if (unidades == 4) printf("IV");
    else if (unidades == 5) printf("V");
    else if (unidades == 6) printf("VI");
    else if (unidades == 7) printf("VII");
    else if (unidades == 8) printf("VIII");
    else if (unidades == 9) printf("IX");

    printf("\n");

    return 0;
}

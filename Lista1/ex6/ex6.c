#include <stdio.h>

int main() {
    int num1, num2, num3, num4;
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // Verificar PA (diferenças iguais)
    int r1 = num2 - num1;
    int r2 = num3 - num2;
    int r3 = num4 - num3;
    int eh_PA = (r1 == r2 && r2 == r3);

    // Verificar PG (razões iguais, sem dividir por 0 e com divisão exata)
    int eh_PG = 0;
    if (num1 != 0 && num2 != 0 && num3 != 0) {
        int q1 = num2 / num1;
        int q2 = num3 / num2;
        int q3 = num4 / num3;

        if (num2 % num1 == 0 && num3 % num2 == 0 && num4 % num3 == 0 && q1 == q2 && q2 == q3) {
            eh_PG = 1;
        }
    }

    // Saída
    if (eh_PA && eh_PG) {
        printf("Os numeros sao uma PA e uma PG\n");
    } else if (eh_PA) {
        printf("Os numeros sao uma PA\n");
    } else if (eh_PG) {
        printf("Os numeros sao uma PG\n");
    } else {
        printf("Os numeros nao sao uma progressao\n");
    }

    return 0;
}


// essa o chat fez, vou repeti-la sozinho e estuda-lá
#include <stdio.h>

int main(){
    int num, ced100, ced50, ced20, ced10;
    scanf("%d", &num);
    
    if (num % 10 != 0 || num <= 0) {
        printf("Valor inválido. Só são permitidos múltiplos de 10.\n");
        return 1;
    }

    ced100 = num / 100;
    num = num % 100;

    ced50 = num / 50;
    num = num % 50;

    ced20 = num / 20;
    num = num % 20;

    ced10 = num / 10;
    num = num % 10;

    if (ced100 > 0) printf("%d nota de R$ 100\n", ced100);
    if (ced50  > 0) printf("%d nota de R$ 50\n", ced50);
    if (ced20  > 0) printf("%d nota de R$ 20\n", ced20);
    if (ced10  > 0) printf("%d nota de R$ 10\n", ced10);

    return 0;
}
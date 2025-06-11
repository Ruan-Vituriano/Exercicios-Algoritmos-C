#include <stdio.h>

int main() {
    int num, i;
    printf("Informe um numero: ");
    scanf("%d", &num);

    printf("Fatores primos de %d: ", num);

    for(i = 2; i <= num; i++) {
        while(num % i == 0) {
            printf("%d ", i);
            num = num / i;
        }
    }

    printf("\n");
    return 0;
}


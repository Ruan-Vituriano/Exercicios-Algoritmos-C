#include <stdio.h>
#include <conio.h>

void main(){
    int a, b;
    printf("Digite A e o maior numero B:\n");
    scanf("%d%d", &a, &b);

    int maiorm = b - (b % a);
    printf("O maior multiplo eh: %d", maiorm);
    getch();
}
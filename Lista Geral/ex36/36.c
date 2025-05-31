#include <stdio.h>
#include <conio.h>

int main(){
    int a, b;
    printf("Informe a e b:\n");
    scanf("%d%d", &a, &b);
    printf("Antes da permutacao:\na:%d\nb:%d\n", a, b);
    int perm = a;
    a = b;
    b = perm;
    printf("Apos a permutacao:\na:%d\nb:%d\n", a, b);

}
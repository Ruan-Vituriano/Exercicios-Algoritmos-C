#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){
    int N;
    printf("Escreva um numero:\n");
    scanf("%d", &N);

    int num1 = 1 * N;
    int num2 = 2 * N;
    int num3 = 3 * N;

    printf("Tabuada:\n1x%d = %d \n2x%d = %d",N, num1, N, num2);
    getch();
}
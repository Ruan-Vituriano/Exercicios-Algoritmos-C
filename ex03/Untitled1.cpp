#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
	
    float num;
    printf("Escreva um número:");
    scanf("%f", &num);
    float triplo = num * 3;
    float dobro = num * 2;
    
    printf("Dobro: %f.", dobro);
    getch();
    return 0;
} 

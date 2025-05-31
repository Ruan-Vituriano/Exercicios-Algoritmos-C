#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
    char nome[50];
    printf("Digite uma palavra e a letra que quer encontrar:");
    int loc;
    scanf("%s%d", &nome, &loc);
    printf("Local: %c\n", nome[loc - 1]);
    getch();
}
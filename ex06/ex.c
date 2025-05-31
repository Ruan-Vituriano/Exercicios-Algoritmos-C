#include <stdio.h>
#include <conio.h>

int main(){
    int num;
    printf("Informe um numero:");
    scanf("%d", &num);
    int suce = num + 1;
    int ant = num - 1;
    printf("Sucessor:%d\nAntecessor:%d", suce, ant);
    getch();

}
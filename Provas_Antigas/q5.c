#include <stdio.h>
#include <conio.h>

void main(){
    int num;
    printf("Informe um numero: ");
    scanf("%d", &num);

    for(int i = 0; i < num; i++){
        for(int j = 5; j > i; j--){
            printf("*");  
        }
        printf("\n");
    }

    getch();
}
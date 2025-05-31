#include <stdio.h>
#include <conio.h>

int main(){
    int seg;
    printf("Informe o valor em segundos:\n");
    scanf("%d", &seg);
    int hora = seg / 3600;
    int min = (seg % 3600) / 60;
    int segundo = (seg % 3600) % 60;
    printf("O valor %d, equivale a %d hora %d minutos %d segundos.", seg, hora, min , segundo);
    getch();
}

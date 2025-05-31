#include <stdio.h>

int main(){
    int hora, minuto, ficha;
    printf("Informe a hora, minutos e a ficha:\n");
    scanf("%d%d%d", &hora, &minuto, &ficha);
    int tespera = (ficha - 1) * 25;
    int tminutos = hora * 60 + minuto + tespera;
    int horaf = tminutos / 60;
    int minf = tminutos % 60; 
    printf("Ana sera atendida as %02d:%02d.\n", horaf, minf);

}
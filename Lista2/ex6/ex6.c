 #include <stdio.h>

int main(){
    int horas, min, fuso;
    printf("Digite as horas: ");
    scanf("%d", &horas);
    printf("Digite os minutos: ");
    scanf("%d", &min);
    printf("Digite o fuso horario: ");
    scanf("%d", &fuso);

    if(fuso == 0){
        printf("%d horas e %d minutos", horas, min);
    } else if (fuso > 0) {
        horas = horas * 60;
        min = horas + min;
        fuso = fuso * 60;
        min = min + fuso;
        horas = min / 60;
        min = min % 60;
        if(horas > 23){
            horas = horas / 24;
        }
        printf("%d horas e %d minutos", horas, min);
    } else {
        fuso = fuso * (-1);
        horas = horas * 60;
        min = horas + min;
        fuso = fuso * 60;
        min = min - fuso;

        if(min < 0){
            min = min * (-1);
            horas = (1440 - min) / 60;
        } else {
            horas = min / 60;
        min = min % 60;
        }
    
        printf("%02d horas e %02d minutos", horas, min);
    }
    return 0;
} 

// Codigo que eu fiz 



// Codigo que o chat fez ->
/*

#include <stdio.h>

int main() {
    int horas, min, fuso;

    printf("Digite as horas: ");
    scanf("%d", &horas);

    printf("Digite os minutos: ");
    scanf("%d", &min);

    printf("Digite o fuso horario: ");
    scanf("%d", &fuso);

    // Converter tudo para minutos
    int total_min = horas * 60 + min;

    // Ajustar fuso (fuso * 60 minutos)
    total_min += fuso * 60;

    // Ajustar para o intervalo de 0 a 1439 (1 dia = 1440 min)
    if (total_min < 0) {
        total_min = 1440 + (total_min % 1440);  // para valores negativos
    }
    total_min = total_min % 1440;

    // Voltar para horas e minutos
    horas = total_min / 60;
    min = total_min % 60;

    // Imprimir no formato hh:mm hs
    printf("%02d:%02d hs\n", horas, min);

    return 0;
}
*/
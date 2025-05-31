#include <stdio.h>
#include <conio.h>

void main(){
    float p1, a1, p2, a2, p3, a3, p4, a4, p5, a5, p6, a6, p7, a7, p8, a8;

    printf("Escreva o peso de todas as duplas");
    scanf("%f%f%f%f%f%f%f%f", &p1, &p2, &p3,&p4,&p5,&p6,&p7,&p8);
    printf("Escreva a altura de todas as duplas");
    scanf("%f%f%f%f%f%f%f%f", &a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8);
    float mp1 = (p1 + p2) / 2.0;
    float ma1 = (a1 + a2) / 2.0;

    float mp2 = (p3 + p4) / 2.0;
    float ma2 = (a4 + a4) / 2.0;

    float mp3 = (p5 + p6) / 2.0;
    float ma3 = (a5 + a6) / 2.0;

    float mp4 = (p7 + p8) / 2.0;
    float ma4 = (a7 + a8) / 2.0;

    float mpgeral = (p1 + p2 + p3 + p4 + p5 + p6 + p7 + p8) / 8.0;
    float mageral = (a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8) / 8.0;

    printf("A media de peso de cada dupla eh:\nDupla 1: %.2f\nDupla 2: %.2f\nDupla 3: %.2f\nDupla 4: %.2f\n\n", mp1, mp2, mp3, mp4);
    printf("A media de altura de cada dupla eh:\nDupla 1: %.2f\nDupla 2: %.2f\nDupla 3: %.2f\nDupla 4: %.2f\n", ma1, ma2, ma3, ma4);

    printf("A media de peso geral eh: %.2f\n", mpgeral);
    printf("A media de altura geral eh: %.2f", mageral);
    getch();

}
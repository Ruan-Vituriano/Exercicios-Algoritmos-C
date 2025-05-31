/*Escreva um programa que leia o peso e a altura de um grupo de 10 pessoas e calcule
o percentual de pessoas abaixo do peso, o percentual de pessoas acima do peso e o
percentual de pessoas que estão dentro da faixa de peso adequada. Para a resolução
do programa considere que a pessoa está na faixa de peso adequada quando o seu
índice de massa corporal está entre 18 e 25.*/

#include <stdio.h>
#include <math.h>
#include <conio.h>
const int qntd_pessoas = 10;
void main(){

    int abaixo = 0, ideal = 0, acima = 0;

    for(int i = 1; i <= qntd_pessoas; i++){
        float peso, altura;
        printf("Informe o peso:");
        scanf("%f", &peso);
        printf("Informe a altura:");
        scanf("%f", &altura);

        float IMC = peso / pow(altura, 2);
        if(IMC < 18){
            abaixo++;
        } else if (IMC > 25) {
            acima++;
        } else {
            ideal++;
        }


    }
    float porc_abaixo = ((float)abaixo / qntd_pessoas) * 100;
    float porc_acima = ((float)acima / qntd_pessoas) * 100;
    float porc_ideal = ((float)ideal / qntd_pessoas) * 100;
    printf("Peso ideal: %.1f%%\nAcima do peso: %.1f%%\nAbaixo do peso: %.1f%%", porc_ideal, porc_acima, porc_abaixo);
    getch();
}
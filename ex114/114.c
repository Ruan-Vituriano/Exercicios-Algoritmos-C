//114. Escreva um programa que leia dois números inteiros M e N e calcule o valor de MN. A  potenciação deve ser calculada através de um comando de repetição, sem a utilização  de qualquer função oferecida pela linguagem de programação.  

#include <stdio.h>
#include <conio.h>

void main(){
    float M, N;
    printf("Informe M e N:\n");
    scanf("%f%f", &M, &N);

    float i, potencia = M;
    for(i = 1; i < N; i++){
        potencia *= M;
    }

    printf("%.1f elevado a %.1f eh %.1f", M, N, potencia);
    getch();
}
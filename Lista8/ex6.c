/*6. Escreva um programa que leia dois números inteiros não negativos M e N e calcule Mn. O
cálculo da potenciação deve ser feito por meio de um subprograma.*/ 

#include <stdio.h>
#include <conio.h>

int potencia(int M, int N){
    int potencia = M;
    if(N == 0){
        return 1;
    }

    for(int i = 0; i < N - 1; i++){
        potencia *= M;
    }
    return potencia;
}

void main(){
    int M, N;
    printf("Informe M e N:\n");
    scanf("%d%d", &M, &N);

    printf("Potencia: %d", potencia(M, N));

    getch();
}
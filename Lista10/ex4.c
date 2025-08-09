/*4. Escreva um programa que leia dois números inteiros M e N (pode supor que esses números
pertencem ao intervalo [1000, 9000] e imprima todos os palíndromos que existem no
intervalo [M, N]. A impressão deve ser feita por meio de um subprograma.*/

#include <stdio.h>

int reverso(int num){
    int invertido = 0, resto;
    while(num > 0){
        resto = num % 10;
        invertido = invertido * 10 + resto;
        num /= 10; 
    }
    return invertido;
}

void palindromo(int M, int N){
    for(int i = M; i <= N; i++){
        int reverse = reverso(i);
        if(i == reverse){
            printf("%d ", i);
        }
    }
}

void main(){
    int M, N;
    printf("Informe o intervalo:\n");
    scanf("%d%d", &M, &N);
    palindromo(M, N);
}
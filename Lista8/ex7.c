/*7. Escreva um programa que leia cinco números inteiros positivos e, para cada valor, verifique
se ele pertence (ou não) à série de Fibonacci. A verificação deve ser feita por meio de uma
função, que deve retornar o valor 1 (quando o número pertencer à série) ou 0 (quando o
número não pertencer à série).*/

#include <stdio.h>
#include <conio.h>

int fib(int num){
    int ant = 0, atual = 0, prox = 1;
    do{
       ant = atual;
       atual = prox;
       prox = ant + atual; 
    } while (prox < num);

    if(prox == num){
        return 1;
    } else {
        return 0;
    }
}

void main(){
    for(int i = 0; i < 5; i++){
        int num;
        printf("Informe o numero:\n");
        scanf("%d", &num);
        if(fib(num)){
        printf("\nPertence\n");
        }else{
            printf("\nNao pertence\n");
        }   
    }
    getch();
}
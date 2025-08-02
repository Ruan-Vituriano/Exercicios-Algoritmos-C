/*9. Escreva um programa que leia dez números inteiros do intervalo entre 1000 e 9999 e, para
cada número, informe o seu reverso. O cálculo do reverso deve ser feito por meio de um
subprograma.*/


#include <stdio.h>
#include <conio.h>
const int qnt = 5;

int palindromo(int num){
    int reverso = 0;
    int origin = num;
    do{
        reverso = reverso * 10 + (origin % 10);
        origin /= 10;
    }while(origin > 0);

    return reverso;
}


void main(){

    for(int i = 0; i < qnt; i++){
        int num;
        printf("Informe um numero: ");
        scanf("%d", &num);

        printf("Reverso: %d\n", palindromo(num));
    }

    getch();
}
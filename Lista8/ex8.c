/*8. Escreva um programa que leia cinco números inteiros do intervalo entre 1000 e 9999 e, para
cada número, verifique se ele é ou não um palíndromo. A verificação deve ser feita por meio
de um subprograma.*/

// fiz para qualquer numero e sem usar vetores >:)

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

    if(reverso == num){
        return 1;
    } else {
        return 0;
    }
}

void main(){
    for(int i = 0; i < qnt; i++){
       int num;
        printf("Numero: ");
        scanf("%d", &num);
        if(palindromo(num) == 1){
            printf("%d: Palindromo\n", num);
        } else{
            printf("%d: Nao palindromo\n", num);
        }
        
    }
    

    getch();
}
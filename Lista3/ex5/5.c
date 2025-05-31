#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, k, a, b, c, i;
    printf("Escreva o enesimo termo: ");
    scanf("%d", &num);

    a = 1;
    b = 1;


    
        if(num == 1 || num == 2) {
            printf("O enesimo termo eh: 1");
        } else {
            for(i = 3; i <= num; i++){
                c = a + b;
                a = b;
                b = c;
            }
    
        printf("O %dº termo da sequência de Fibonacci é: %d\n", num, c);
    }
}
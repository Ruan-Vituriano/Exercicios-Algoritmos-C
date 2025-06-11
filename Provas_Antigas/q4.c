#include <stdio.h>
#include <conio.h>

void main(){
    int contpar = 0, contimpar = 0, num, somapar = 0, somaimpar = 0;
    do{
        printf("Informe um numero: ");
        scanf("%d", &num);

        if(num % 2 == 0 && num != 0){
            somapar += num;
            contpar++;
        } else if (num % 2 != 0 && num != 0) {
            somaimpar += num;
            contimpar++;
        }


    } while (num != 0);

    if(contimpar == 0 || contpar == 0){
        printf("Divisao por zero! numero nao existe.");
    } else {
        float mediapar = somapar / contpar;
        float mediaimpar = somaimpar / contimpar;
        printf("Media dos pares: %.1f\nMedia dos impares:%.1f", mediapar, mediaimpar);
    }

    getch();
}
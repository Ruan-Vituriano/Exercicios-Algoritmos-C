/*
Escreva um programa que leia vários saques e, para cada valor sacado, informe a
quantidade de cédulas que devem ser entregues de cada tipo. Para isso, considere que
o caixa eletrônico tem cédulas de R$ 100,00, R$ 50,00, R$ 20,00 e R$ 10,00 e que a
quantidade de cada tipo de cédula é infinita. Em cada saque, o programa deve dar
preferência ao uso de cédulas maiores. Caso o usuário informe um valor que não
possa ser sacado, o programa deve exibir uma mensagem informando que o saque não
poderá ser realizado. O processo de leitura deve ser encerrado quando o total de todos
os saques realizados ultrapassar R$ 10.000,00. Ao fim da leitura, o programa deve
informar o total de todos os saques realizados e o total de cédulas usadas de cada tipo.*/

#include <stdio.h>

int main(){
    
    
    int total = 0;
    int nota100 = 0, nota50 = 0, nota20 = 0, nota10 = 0;
    do{
        int c100 = 0, c50 = 0, c20 = 0, c10 = 0;
        int saque, resto = 0;
        printf("Saque: ");
        scanf("%d", &saque);

        if(saque + total > 10000){
            printf("O valor ultrapassa o total no banco.\n");
        } else {

        
        
        total += saque;
    
            
        c100 = (saque / 100);
        nota100 += c100;
        resto = saque % 100;
 
        c50 = (resto / 50);
        nota50 += c50;
        resto = resto % 50;
       
        c20 = resto / 20;
        nota20 += c20;
        resto = resto % 20;

        c10 = (resto / 10);
        nota10 += c10;
        printf("Total Sacado: %d\n", total);
    }
    }while(total < 10000);
    printf("NOTAS\n100: %d\n50: %d\n20: %d\n10: %d", nota100, nota50, nota20, nota10);

    return 0;
}
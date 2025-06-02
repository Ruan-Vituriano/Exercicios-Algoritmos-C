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
    int saldo = 0;
    
    int c100 = 0, c50 = 0, c20 = 0, c10 = 0;
    while(saldo < 10000){
        int saque;
        printf("Saque: ");
        scanf("%d", &saque);

        saldo = saque;
        c100 = (saque / 100);
        
        int resto = saque % 100;
        c50 = (resto / 50);

        resto = resto % 50;
        c20 = resto / 20;
        
        resto = resto % 20;
        c10 = (resto / 10);

        printf("Seu saldo e: %d\n", saldo);
    }
    printf("NOTAS\n100: %d\n50: %d\n20: %d\n10: %d", c100, c50, c20, c10);

    return 0;
}
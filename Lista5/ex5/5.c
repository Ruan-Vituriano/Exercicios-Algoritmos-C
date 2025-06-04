/*Escreva um programa que leia vários itens de uma compra feita pelo usuário. Para
cada item, o usuário deve informar o seu nome, o seu preço unitário e a quantidade
comprada. Após cada leitura, o programa deve perguntar ao usuário se ele deseja

adicionar um novo item ou fechar a conta. O programa deve considerar que o usuário
irá digitar pelo menos um item. Após terminar a leitura, o programa deve mostrar o
valor da conta à vista e o valor da conta a prazo. O valor da conta a prazo corresponde
à soma do valor total de cada item digitado pelo usuário. O valor da conta à vista
corresponde ao valor da conta a prazo com um desconto de 15%.*/

#include <stdio.h>
#include <string.h>
int main(){
    int total = 0;
    int fechar = 1;
    do{
        char nome[50];
        char parar[50];
        int preco, qntd;
        printf("Nome do Produto: ");
        fgets(nome, sizeof(nome), stdin);
        fflush(stdin);
        
            printf("Preco: ");
            scanf("%d", &preco);
            printf("Quantidade: ");
            scanf("%d", &qntd);

            total += (preco * qntd);
        fflush(stdin);
        printf("Voce deseja fechar a conta? (Se sim digite ""fechar"")\n");
        fgets(parar, sizeof(nome), stdin);
        fflush(stdin);
        if(strcmp(parar, "fechar") == 0){
        fechar = 0;   
        }
        

    }while(fechar != 0);

    printf("Valor a prazo: R$%.2f\n", (float)total);
    printf("Valor a vista: R$%.2f", (float)total * 0.85);

    return 0;
}
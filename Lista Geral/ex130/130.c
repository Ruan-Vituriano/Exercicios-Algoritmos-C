/*
Escreva um programa que leia o número de pessoas que irão participar de um evento,  no qual será sorteado um prêmio, e, a seguir, leia o nome e o número do bilhete  recebido por cada uma destas pessoas. O programa deve informar o nome do  ganhador do prêmio, que é a pessoa cuja ordem de chegada é igual ao número do seu  bilhete. Para isto, você poder supor que: a ordem de chegada de cada pessoa  corresponde à ordem de leitura dos seus dados; sempre existe uma pessoa cujo  número do bilhete é igual a sua ordem de chegada; este caso acontece para apenas  uma pessoa. 
*/

#include <stdio.h>
#include <string.h>
int main(){
    int qntd;
    printf("Informe a quantidade de pessoas:\n");
    scanf("%d", &qntd);
    fflush(stdin);
    char sorteado[50];
    char nome[50];
    int num;
    for(int i = 1; i <= qntd; i++){
        printf("Nome: ");
        fgets(nome, sizeof(nome), stdin);
        fflush(stdin);
        printf("Numero do bilhete: ");
        scanf("%d", &num);
        fflush(stdin);

        if(num == i){
            strcpy(sorteado, nome);
        }

    }
    printf("O sorteado foi: %s", sorteado);

    return 0;
}
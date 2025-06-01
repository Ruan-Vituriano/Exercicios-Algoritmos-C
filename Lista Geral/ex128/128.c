/*Escreva um programa que leia o nome e o peso de 20 bois que participam de uma  exposição e imprima o nome do boi mais leve e o nome do boi mais pesado. Para isso,  suponha que todos os bois têm pesos distintos.  
*/
#include <stdio.h>
#include <string.h>
const int qntd = 5;
int main(){
    char nome[100];
    int peso;
    char maior[100], menor[100];
    int maiorpeso, menorpeso;

    for(int i = 0; i < qntd; i++){


        printf("Informe o nome do boi:\n");
        fgets(nome, sizeof(nome), stdin);
        fflush(stdin);
        printf("Informe o peso do boi:\n");
        scanf("%d", &peso);
        fflush(stdin);
        
        if(i == 0){
            strcpy(maior, nome);
            strcpy(menor, nome);
            maiorpeso = peso;
            menorpeso = peso;
        } else if(peso < menorpeso){
            strcpy(menor, nome);
            menorpeso = peso;
        } else if(peso > maiorpeso){
            strcpy(maior, nome);
            maiorpeso = peso;
        }
    }
    printf("O maior boi eh:%s com peso: %d\n", maior, maiorpeso);
    printf("O menor boi eh:%s com peso: %d", menor, menorpeso);

    return 0;
}
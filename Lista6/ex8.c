/*8. Escreva um programa que leia um vetor de 10 números inteiros e identifique a distância
entre o menor e o maior número do vetor. Você pode supor que o vetor não tem
nenhum número repetido.*/

#include <stdio.h>
const int tam = 5;
int main(){
    int vet[tam];
    printf("Informe o vetor:\n");

    for(int i = 0; i < tam; i++){
        scanf("%d", &vet[i]);
    }
    int menor, maior, atual;
    for(int i = 0; i < tam; i++){
        atual = vet[i];
        if(i == 0){
            maior = vet[i];  
            menor = vet[i];      
        } else if(atual > maior){
            maior = atual;
        } else if (atual < menor){
            menor = atual;
        }
    }

    printf("Menor: %d\nMaior: %d", menor, maior);
    return 0;
}
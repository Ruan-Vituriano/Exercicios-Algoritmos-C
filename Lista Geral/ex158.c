/*158. Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a  leitura, imprima todos os elementos do vetor que são maiores do que a média  aritmética de todos os elementos do vetor.  
*/

#include <stdio.h>
#include <conio.h>
const int tam = 5;
void main(){    
    int vet[tam];
    int soma = 0, cont = 0;
    printf("Vetor:\n");
    for(int i = 0; i < tam; i++){
        scanf("%d", &vet[i]);
        soma += vet[i];
        cont++;
    }
    float media = (float)soma / cont;


    printf("Numeros maiores que a media:\n");
    for(int i = 0; i < tam; i++){
        if(vet[i] > media){
            printf("%d ", vet[i]);
        }
    }

    
    getch();
}
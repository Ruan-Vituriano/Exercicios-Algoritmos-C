/*156. Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a  leitura, leia um número inteiro N e imprima todos os elementos do vetor que são  maiores que N.
*/

#include <stdio.h>
#include <conio.h>
const int tam = 10;
void main(){    
    int vet[tam];
    printf("Vetor:\n");
    for(int i = 0; i < tam; i++){
        scanf("%d", &vet[i]);
    }
    int N;
    printf("\nInforme N: ");
    scanf("%d", &N);

    printf("Numeros maiores que N:\n");
    for(int i = 0; i < tam; i++){
        if(vet[i] > N){
            printf("%d ", vet[i]);
        }
    }

    
    getch();
}
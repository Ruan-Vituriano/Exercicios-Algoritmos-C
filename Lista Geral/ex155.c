/*155. Escreva um programa que leia dez números inteiros e, após finalizar a leitura, leia um  número inteiro N (entre 1 e 10) e imprima qual foi o enésimo número digitado pelo  usuário.  */

#include <stdio.h>
#include <conio.h>
const int n = 5;
void main(){
    int vet[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }
    int num;
    printf("Informe o enesimo num: ");
    scanf("%d", &num);
    printf("\n%d", vet[num]);


    getch();
}
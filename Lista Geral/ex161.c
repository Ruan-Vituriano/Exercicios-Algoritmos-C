/*161. Escreva um programa que leia um vetor de vinte caracteres e verifique se o vetor é  ou não um palíndromo. */
#include <stdio.h>
const int n = 4;
int main(){
    int vet[n];
    int inverso[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
        inverso[(n - 1) - i] = vet[i];
    }

    int palindromo = 1;
    for(int i = 0; i < n; i++){
        if(vet[i] != inverso[i]){
            palindromo = 0;
        }
    }
    if(palindromo == 1){
        printf("O numero e um palindromo.");
    } else {
        printf("Nao e um palindromo");
    }
    return 0;
}
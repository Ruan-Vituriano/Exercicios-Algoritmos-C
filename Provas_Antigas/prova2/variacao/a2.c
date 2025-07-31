/*vetor palindromo*/

#include <stdio.h>
#include <conio.h>
const int tam = 5;
void main(){
    int vet[tam];

    printf("Vet:\n");
    for(int i = 0; i < tam; i++){
        scanf("%d", &vet[i]);
    }
    int palindromo = 1;
    for(int i = 0; i < tam / 2; i++){
        if(vet[i] != vet[tam - 1 - i]){
            palindromo = 0;
        }
    }

    if(palindromo){
        printf("O vetor e palindromo");
    } else {
        printf("O vetor nao e palindromo");
    }
    getch();
}
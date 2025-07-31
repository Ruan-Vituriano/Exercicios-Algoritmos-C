/*vetor palindromo*/

#include <stdio.h>
const int tam = 5;
int main(){
    int vet[tam];
    printf("informe o vetor:\n");
    for(int i = 0; i < tam; i++){
        scanf("%d", &vet[i]);
    }
    int palindromo = 1;
    for(int i = 0; i < tam / 2; i++){
        if(vet[i] != vet[(tam - 1) - i]){
            palindromo = 0;
            break;
        }
    }
    if(palindromo){
        printf("Palindromo");
    } else {
        printf("Nao palindromo!");
    }

    return 0;
}
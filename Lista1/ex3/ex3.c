#include <stdio.h>

int main(){
    int ano;
    scanf("%d", &ano);
    if(ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)){
        printf("Ano bisexto");
    } else {
        printf("Nao e bisexto");
    }
    return 0;
}
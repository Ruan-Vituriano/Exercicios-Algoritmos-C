/*
1 1 2 3 5


0 0 1 

*/


#include <stdio.h>
int main(){
    int num;
    printf("Informe um inteiro positivo: ");
    scanf("%d", &num);


    int anterior = 0, atual = 0, proximo = 1;
    do{

        anterior = atual;
        atual = proximo;
        proximo = anterior + atual;
        
    } while(proximo < num);

    if(proximo == num){
        printf("O numero pertence a serie.");
    } else {
        printf("O numero nao pertence a serie.");
    }

    return 0;
}
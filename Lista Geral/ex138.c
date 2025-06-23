/*Escreva um programa que leia um número inteiro positivo e calcule a soma de todos  os seus algarismos. */

/*
#include <stdio.h>
#include <math.h>
int main(){
    int num, cont = 0;
    scanf("%d", &num);
    int alg = num;
    do {
        alg /= 10;
        cont++;
    } while(alg != 0);
    int dez = pow(10, cont - 1);
    int soma = 0;
    for(int i = 0; i < cont; i++){
        int n = num;
        n /= dez;
        soma += n;
        num = num % dez;
        dez /= 10;
        printf("%d", n);
        if(i < cont - 1){
            printf("+");
        }
    }

    printf(" =");
    printf(" %d", soma);
    return 0;
}
*/

#include <stdio.h>

int main() {
    int num, soma = 0;
    
    printf("Digite um numero positivo: ");
    scanf("%d", &num);
    
    while (num > 0) {
        soma += num % 10;  // Pega o último dígito
        num /= 10;         // Remove o último dígito
    }
    
    printf("Soma dos algarismos = %d\n", soma);
    return 0;
}
/*251. Escreva um subprograma recursivo que receba como entrada um número inteiro não  negativo e calcule o seu fatorial. 
*/

#include <stdio.h>

int fatorial(int n){
    if(n == 1) return 1;
    return fatorial(n - 1) * n;
}

void main(){
    int num;
    scanf("%d", &num);
    printf("%d", fatorial(num));
}
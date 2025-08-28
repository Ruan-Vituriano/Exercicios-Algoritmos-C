/*252. Escreva um subprograma recursivo que receba como parâmetros de entrada dois  números inteiros M e N e calcule a soma de todos os números do intervalo [M, N]. 
*/

#include <stdio.h>

int soma(int m, int n){
    if(n == m) return m;
    return soma(m + 1, n) + m;
}

void main(){
    int m, n;
    scanf("%d%d", &m, &n);
    printf("%d", soma(m, n));
}
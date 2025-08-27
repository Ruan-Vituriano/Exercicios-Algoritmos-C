/*265. Escreva um subprograma recursivo que receba como entrada um número inteiro N  positivo e calcule o enésimo termo da série de Fibonacci. 
*/

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) {
        return 0; // Para números não positivos
    }
    if (n == 1 || n == 2) {
        return 1; // Casos base: F(1) = 1, F(2) = 1
    }
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void main() {
    int n;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);
    
    if (n > 0) {
        printf("F(%d) = %d\n", n, fibonacci(n));
    } else {
        printf("Por favor, digite um número positivo.\n");
    }
}
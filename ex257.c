/*257. Escreva um subprograma recursivo que receba como entrada dois números inteiros  correspondentes aos valores da base e do expoente e calcule o valor da potenciação.  Você pode supor que o expoente é um valor não negativo e que o caso 00 é tratado  no programa principal (ou seja, não precisa ser tratado dentro do subprograma).
*/

#include <stdio.h>

int potencia(int base, int expo) {
    if (expo == 0) { // caso base
        return 1;
    }
    return base * potencia(base, expo - 1); // passo recursivo
}

int main() {
    int base, expo;
    scanf("%d%d", &base, &expo);

    printf("%d\n", potencia(base, expo));
    return 0;
}

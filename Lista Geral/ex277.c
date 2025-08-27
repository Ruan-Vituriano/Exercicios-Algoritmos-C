/*277. O Banco do Povo está realizando uma grande promoção em seus financiamentos.  Ele financia qualquer valor em até 240 prestações. O valor da primeira prestação  corresponde a 20% do valor do empréstimo. Os valores das demais prestações  correspondem ao valor da parcela anterior acrescido de uma taxa de juros de 7%. Com  base nestas informações, escreva um subprograma recursivo que receba como  entrada o valor do empréstimo, o número de parcelas e um número inteiro N entre 1 e  240 e calcule qual será o valor da parcela N do empréstimo. */

// 240 prestacoes
// 1° 20% emprestimo
// 2°+ 7%

// Entrada: emprestimos, parcelas, N
// Saida: Valor da parcela N

#include <stdio.h>

float parcela(int emp, int parcelas, int N){
    if(N == 1){
        return emp * 0.2;
    }
    
    return parcela(emp, parcelas, N - 1) * 1.07; 
}

void main(){
    float parcelas, emprestimo, N;
    scanf("%f%f%f", &emprestimo, &parcelas, &N);
    float parcN = parcela(emprestimo, parcelas, N);

    printf("Parcela %.1f: %.2f", N, parcN);
}
/*O Banco do Povo está realizando uma grande promoção em seus financiamentos. Ele
financia qualquer valor em até 240 prestações. O valor da primeira prestação
corresponde ao valor do empréstimo dividido pelo número de parcelas. Os valores das
demais prestações correspondem ao valor da parcela anterior acrescido de uma taxa
de juros de 7%. Escreva um programa que leia o valor a ser financiado por um cliente e
o número de prestações desejadas e calcule: o valor de cada prestação, o valor total
que o cliente vai pagar pelo empréstimo e a diferença entre o valor a ser pago e o valor
financiado.*/

#include <stdio.h>

int main(){
    float i, emprestimo, qntd_prestacao;

    printf("Informe o valor do emprestimo e as prestacoes:\n");
    scanf("%f%f", &emprestimo, &qntd_prestacao);
    if(qntd_prestacao > 240){
        printf("Voce so pode usar 240 prestacoes!");
        return 1;
    }


    float primeira_prest = (float)emprestimo / qntd_prestacao;
    printf("Prestacoes:\n%.2f\n", primeira_prest);
    float soma_p = 0;
    float soma = primeira_prest;
    for(i = 2; i <= qntd_prestacao; i++){
        soma *= 1.07;
        printf("%.2f\n", soma);
        soma_p += soma;
    }
    float valor_total = soma_p + primeira_prest;
    float diferenca = valor_total - emprestimo;
    printf("O valor total a ser pago eh: %.2f\n", valor_total);
    printf("diferenca entre o valor a ser pago e o valor financiado: %.2f\n", diferenca);

    return 0;
}
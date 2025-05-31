#include <stdio.h>

int main() {
    int mes_inicio, ano_inicio;
    int pena_anos, pena_meses;

    // Entrada de dados
    printf("Informe o mes e o ano de inicio:\n");
    scanf("%d %d", &mes_inicio, &ano_inicio);
    printf("Informe o mes e o ano da pena:\n");
    scanf("%d %d", &pena_anos, &pena_meses);

    // Converte a data de início para total de meses
    int total_meses_inicio = ano_inicio * 12 + mes_inicio;

    // Converte a pena para total de meses
    int total_pena_meses = pena_anos * 12 + pena_meses;

    // Soma os meses
    int total_meses_fim = total_meses_inicio + total_pena_meses;

    // Converte de volta para ano e mês
    int ano_fim = total_meses_fim / 12;
    int mes_fim = total_meses_fim % 12;

    // Ajusta o mês final (mês 0 significa dezembro do ano anterior)
    // Sem usar if: se mes_fim == 0, então subtrai 1 do ano e coloca mês 12
    // Usando lógica booleana (0 ou 1)
    int ajuste = (mes_fim == 0);
    ano_fim -= ajuste;
    mes_fim += 12 * ajuste;

    // Saída
    printf("%d %d\n", mes_fim, ano_fim);

    return 0;
}

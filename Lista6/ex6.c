/*7. (OPI -2013) Um escritório de informática possui um corredor bem amplo com N salas.
Em um certo final de semana, o vigia resolveu brincar de abrir e fechar as portas das
salas para passar o tempo. Na primeira rodada, ele abriu todas as portas das salas. Na
segunda rodada, ele fechou as portas de todas as salas com números pares. Na
terceira rodada, ele visitou todas as salas cujo número era um múltiplo de 3. Se a porta
da sala estivesse aberta, ele a fechava. Se a porta da sala estivesse fechada, ele a
abria. Ele repetiu esta brincadeira até a N-ésima rodada. Com base nessas
informações, escreva um programa que leia o número de portas existentes no

escritório e identifique quantas portas ficaram abertas ao fim de todas as rodadas.*/

#include <stdio.h>

int main() {
    int N;
    printf("Informe o numero de portas:\n");
    scanf("%d", &N);

    int portas[N];
    // Inicializa todas as portas como fechadas (0 = fechada, 1 = aberta)
    for (int i = 0; i < N; i++) {
        portas[i] = 0;
    }

    // Rodadas de 1 até N
    for (int rodada = 1; rodada <= N; rodada++) {
        for (int i = rodada - 1; i < N; i += rodada) {
            portas[i] = !portas[i]; // alterna o estado da porta
        }
    }

    // Conta portas abertas
    int cont = 0;
    for (int i = 0; i < N; i++) {
        if (portas[i] == 1) {
            cont++;
        }
    }

    printf("Portas abertas: %d\n", cont);

    return 0;
}

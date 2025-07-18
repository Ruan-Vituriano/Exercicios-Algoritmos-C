#include <stdio.h>

int main() {
    int portas;
    scanf("%d", &portas);
    int vet[portas];
    
    // Inicializa todas as portas como fechadas (0)
    for(int i = 0; i < portas; i++) {
        vet[i] = 0;
    }
    
    // Simula cada rodada
    for(int rodada = 1; rodada <= portas; rodada++) {
        for(int j = rodada - 1; j < portas; j += rodada) {
            vet[j] = !vet[j]; // Alterna o estado da porta
        }
    }
    
    // Conta as portas abertas
    int port_abertas = 0;
    for(int i = 0; i < portas; i++) {
        if(vet[i] == 1) {
            port_abertas++;
        }
    }
    
    printf("Portas abertas: %d", port_abertas);
    return 0;
}
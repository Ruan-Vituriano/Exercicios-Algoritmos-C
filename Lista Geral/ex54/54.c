#include <stdio.h>

int main() {
    int hora, minuto;
    int tempo = 0; // minutos desde meia-noite

    printf("Informe o horário de saída de Cajazeiras (hora minuto):\n");
    scanf("%d %d", &hora, &minuto);

    tempo = hora * 60 + minuto;  // converter para minutos

    // Cajazeiras → Sousa (50 min)
    tempo += 50;
    printf("Chegada em Sousa: %02d:%02d\n", tempo / 60, tempo % 60);
    tempo += 20; // entrega

    // Sousa → Patos (120 min)
    tempo += 120;
    printf("Chegada em Patos: %02d:%02d\n", tempo / 60, tempo % 60);
    tempo += 20;

    // Patos → Campina Grande (150 min)
    tempo += 150;
    printf("Chegada em Campina Grande: %02d:%02d\n", tempo / 60, tempo % 60);
    tempo += 20;

    // Campina Grande → João Pessoa (120 min)
    tempo += 120;
    printf("Chegada em João Pessoa: %02d:%02d\n", tempo / 60, tempo % 60);
    tempo += 20;

    return 0;
}

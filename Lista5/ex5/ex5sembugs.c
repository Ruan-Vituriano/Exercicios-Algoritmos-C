#include <stdio.h>
#include <string.h>
#include <ctype.h>

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void removerQuebraDeLinha(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }
}

int main() {
    int total = 0;
    int continuar = 1;
    
    do {
        char nome[50];
        char resposta[50];
        int preco, qntd;

        printf("Nome do Produto: ");
        fgets(nome, sizeof(nome), stdin);
        removerQuebraDeLinha(nome);

        printf("Preco: ");
        scanf("%d", &preco);
        
        printf("Quantidade: ");
        scanf("%d", &qntd);
        
        total += (preco * qntd);
        limparBuffer(); // Limpa o buffer após scanf

        printf("Voce deseja fechar a conta? (Se sim digite \"fechar\")\n");
        fgets(resposta, sizeof(resposta), stdin);
        removerQuebraDeLinha(resposta);

        if (strcmp(resposta, "fechar") == 0) {
            continuar = 0;
        }

    } while (continuar);

    printf("\nValor a prazo: R$%.2f\n", (float)total);
    printf("Valor a vista (15%% de desconto): R$%.2f\n", (float)total * 0.85);

    return 0;
}
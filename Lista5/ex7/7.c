/*Escreva um programa que leia dois strings de até 10 caracteres e concatene esses dois
valores em um terceiro string. O programa deve ser resolvido sem a utilização de
qualquer função para a manipulação de strings.*/

/*
#include <stdio.h>
#include <string.h>

int main(){
    char nome1[11];
    char nome2[11];
    char conc[21];
    printf("Informe o primeiro nome: ");
    fgets(nome1, sizeof(nome1), stdin);
    fflush(stdin);
    printf("Informe o segundo nome: ");
    fgets(nome2, sizeof(nome2), stdin);
    fflush(stdin);
    int i;



    for(i = 0; nome1[i] != '\0'; i++){
        conc[i] = nome1[i];
    }

    int k;
    for(k = 0; nome2[k] != '\0'; k++){
        conc[i + k] = nome2[k];
    }
    conc[k + i] = '\0';      
    printf("%s", conc);
    
    return 0;
}
*/

// Codigo corrigido:

#include <stdio.h>

int main() {
    char nome1[11];  // 10 caracteres + '\0'
    char nome2[11];  // 10 caracteres + '\0'
    char conc[21];   // 20 caracteres + '\0'
    int i, k;

    printf("Informe o primeiro nome: ");
    fgets(nome1, sizeof(nome1), stdin);
    // Remove o '\n' se existir
    for (i = 0; nome1[i] != '\0'; i++) {
        if (nome1[i] == '\n') {
            nome1[i] = '\0';
            break;
        }
    }

    printf("Informe o segundo nome: ");
    fgets(nome2, sizeof(nome2), stdin);
    // Remove o '\n' se existir
    for (k = 0; nome2[k] != '\0'; k++) {
        if (nome2[k] == '\n') {
            nome2[k] = '\0';
            break;
        }
    }

    // Copia nome1 para conc
    for (i = 0; nome1[i] != '\0'; i++) {
        conc[i] = nome1[i];
    }

    // Concatena nome2 em conc
    for (k = 0; nome2[k] != '\0'; k++) {
        conc[i + k] = nome2[k];
    }

    // Adiciona o terminador nulo
    conc[i + k] = '\0';

    printf("Resultado: %s\n", conc);

    return 0;
}

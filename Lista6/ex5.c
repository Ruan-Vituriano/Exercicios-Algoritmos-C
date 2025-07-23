/*O IFPB precisa de um programa que faça a correção automática das provas do seu
teste de seleção. A prova, que é a mesma para todos os alunos, consiste de dez
questões objetivas, cuja resposta deve ser (a, b, c, d ou e). O programa deve ler o
gabarito da prova e, a seguir, o as opções que aparecem no seu cartão de respostas de
5 candidatos. Para cada candidato, o programa deve imprimir o seu total de acertos.*/

#include <stdio.h>

int main(){
    char gabarito[5];
    char caditado1[5];
    for(int i = 0; i < 5; i++){
        gabarito[i] = 'a' + i;
    }
    printf("Gabarito:\n");
    for(int i = 0; i < 5; i++){
        
        printf("%c ", gabarito[i]);
    }

    printf("\nCaditado 1:\n");
    for(int i = 0; i < 5; i++){
        scanf("%c", &caditado1[i]);
        fflush(stdin);
    }
    int nota1 = 0;
    for(int i = 0; i < 5; i++){
        if(caditado1[i] == gabarito[i]) nota1++;
    }
    printf("Nota: %d", nota1);

    return 0;
}
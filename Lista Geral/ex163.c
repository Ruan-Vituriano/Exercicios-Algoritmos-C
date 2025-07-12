/*O IFPB precisa de um programa que faça a correção automática das provas do seu  teste de seleção. A prova, que é a mesma para todos os alunos, consiste de dez  questões objetivas, cuja resposta deve ser (a, b, c, d ou e). O programa deve ler o  gabarito da prova e, a seguir, o nome de um candidato e as opções que aparecem no seu cartão de respostas. Para cada candidato, o programa deve imprimir o seu  percentual de acertos. O processamento deve ser encerrado quando for encontrado  um candidato com o nome ´fim’, que não deve ser processado. O programa deve  imprimir também a pontuação média dos candidatos. */

#include <stdio.h>
#include <conio.h>
#include <string.h>
const int qst = 5;
void main(){
    char gabarito[qst];
    char respostas[qst];
    int ptotal = 0;
    int canditados = 0;


    printf("Informe o gabarito:\n");
    for(int i = 0; i < qst; i++){
        scanf(" %c", &gabarito[i]);
    }
    
    char nome[50];    
    while(1){ 
        
        
        int acertos = 0;
        char respostas[qst];

        printf("Informe o nome do aluno (Ou digite fim): \n");
        scanf(" %s", nome);
        
        if(strcmp(nome, "fim") != 1){
            break;
        } else {
            printf("Informe as respostas do aluno:\n");
            for(int i = 0; i < qst; i++){
                scanf(" %c", &respostas[i]);
            }
            for(int i = 0; i < qst; i++){
                if(respostas[i] == gabarito[i]){
                    acertos++;
                }
            }
        float percentual = (acertos / (float)qst  ) * 100;
        printf("\nO aluno %s tem %2.f%% de acertos.\n", nome, percentual);
        canditados++;
        ptotal += percentual;     
        }



    }
    
    if(canditados){
        float media = (float)ptotal / canditados;
    
        printf("\nA media de pontos eh: %2.f%%", media);
    } else {
        printf("Nao foi informado canditados!");
    }
    
   

    getch();
}
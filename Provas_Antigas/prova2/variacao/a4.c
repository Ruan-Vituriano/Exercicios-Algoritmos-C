/*gabarito*/

#include <stdio.h>
#include <conio.h>

const int qst = 5;

void main(){
    char gabarito[qst];
    char resposta[qst];
    int acertos = 0;
    printf("Informe o gabarito da prova:\n");
    gets(gabarito);
    fflush(stdin);

    printf("Informe as respostas do canditado:\n");
    for(int i = 0; i < qst; i++){
        scanf(" %c", &resposta[i]);
        if(resposta[i] == gabarito[i]){
            acertos++;
        }
    }

    printf("O candidato acertou: %d/%d", acertos, qst);
    getch();
}
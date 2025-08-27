/*273. Escreva um subprograma recursivo que receba como entrada um string contendo a  sequência de resultados de um time e calcule a sua pontuação, considerando que V 
representa vitória e vale 3 pontos, E representa empate e vale um ponto e D  representa derrota e não vale qualquer ponto. Por exemplo, se a entrada do  programa for VVVEEDDVED, a pontuação do time é 15. 
*/

#include <stdio.h>
#include <string.h>
const int tam = 10;
int pontuacao(char resultados[],int qntd){

    if(qntd < 0){
        return 0;
    }
    if(resultados[qntd] == 'V'){
        return 3 + pontuacao(resultados, qntd - 1);
    }else
    if(resultados[qntd] == 'E'){
        return 1 + pontuacao(resultados, qntd - 1);
    }else if (resultados[qntd] == 'D'){
        return 0 + pontuacao(resultados, qntd - 1);
    } else {
        return pontuacao(resultados, qntd - 1);
    }
    
}

void main(){
    char resultados[tam];
    fgets(resultados, sizeof(resultados), stdin);
    int qntd = strlen(resultados);
    int pontos = pontuacao(resultados, qntd);
    printf("Pontos: %d", pontos);
}
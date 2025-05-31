/*Escreva um programa que simule uma eleição para o representante de uma turma.
Para isso, considere que as opções de voto são [1] Maria, [2] Francisco, [3] Marta, [4]
João. O processo de leitura dos votos deve ser encerrado quando algum dos
candidatos conquistar 10 votos. Terminado o processo de leitura, o programa deve
informar a quantidade de votos recebidos por cada candidato e o nome do vencedor.*/

#include <stdio.h>
#include <conio.h>
const int qntd = 5;
void main(){
    
    int maria = 0, francisco = 0, marta = 0, joao = 0;

    while(maria < qntd && francisco < qntd && marta < qntd && joao < qntd){
        int voto;
        printf("VOTE: ");
        scanf("%d", &voto);
        switch(voto){
            case 1: maria++; break;
            case 2: francisco++; break;
            case 3: marta++; break;
            case 4: joao++; break;
            default: break;
        }
    }
    printf("QUANTIDADE DE VOTOS:\n");
    printf("Maria: %d\n", maria);
    printf("Francisco: %d\n", francisco);
    printf("Marta: %d\n", marta);
    printf("Joao: %d\n\n", joao);

    if(maria == qntd){
        printf("VENCENDOR:\nMARIA!");
    }else if(francisco == qntd){
        printf("VENCENDOR:\nFRANCISCO!");
    }else if(marta == qntd){
        printf("VENCENDOR:\nMARTA!");
    } else {
        printf("VENCENDOR:\nJOAO!");
    }

}
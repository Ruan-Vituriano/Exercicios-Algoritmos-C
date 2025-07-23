/*7. (OPI -2013) Um escritório de informática possui um corredor bem amplo com N salas.
Em um certo final de semana, o vigia resolveu brincar de abrir e fechar as portas das
salas para passar o tempo.*/

#include <stdio.h>

int main(){
    int rodadas;

    printf("Informe o numero de portas:\n");
    scanf("%d", &rodadas);

    int portas[rodadas];
    int rodada = 0;
    for(int i = rodadas; i >= 0; i--){
        if(rodada <= rodadas){
            for(int j = 0; j < rodadas; j++){
                portas[i] = 1;
            }    
        }
        if(rodada <= rodadas){
            if()
            for(int j = 0; j < rodadas; j++){
                portas[i] = 1;
            }
        }
    }

    return 0;
}
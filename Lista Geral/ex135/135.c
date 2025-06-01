/*
135. Escreva um programa que simule uma votação. O programa deve computar o voto de  20 eleitores e depois deve imprimir a quantidade e o percentual de votos recebidos  por cada candidato, bem como a quantidade e o percentual de votos nulos. As opções  de voto são: 
[1] João Borracheiro 
[2] Zé do caminhão 
[3] Maria da bodega 
[4] Ana  
*/

#include <stdio.h>
const int qntd = 10;
int main(){
    
    int cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, contnulos = 0;
    for(int i = 0; i < qntd; i++){
        int voto;
        printf("VOTE: [1] Joao Borracheiro [2] Ze do caminhao [3] Maria da bodega [4] Ana: ");
        scanf("%d", &voto);
        fflush(stdin);
        switch(voto){
            case 1: cont1++; break;
            case 2: cont2++; break;
            case 3: cont3++; break;
            case 4: cont4++; break;
            default: contnulos++; break;
        }
    }   
    printf("Joao Borracheiro: %d\nZe do caminhao: %d\nMaria da bodega: %d\nAna: %d\nNulos: %d", cont1, cont2, cont3, cont4, contnulos);
    return 0;
}
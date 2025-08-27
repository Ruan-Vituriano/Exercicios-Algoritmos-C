/*
ler gabarito
10 qst
cart resp
10 candidatos
INFORMAR QNTD DE ACERTO
*/
#include <stdio.h>
#define tam 5

void lervet(char vet[]){
    for(int i = 0; i < tam; i++){
        scanf(" %c", &vet[i]);
    }
}

int compvet(char vet1[], char vet2[]){
    int cont = 0;
    for(int i = 0; i < tam; i++){
        if(vet1[i] == vet2[i]) cont++;
    }
    return cont;
}

void main(){
    char gab[tam], cand[tam];
    printf("Gabarito:\n");
    lervet(gab);
    for(int i = 0; i < tam; i++){
        printf("Candidato %d:\n", i + 1);
        lervet(cand);
        printf("\nAcertos: %d", compvet(gab, cand));
    }
}
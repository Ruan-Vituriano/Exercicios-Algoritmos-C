/*171. Escreva um programa que leia dois vetores de 5 números reais cada e calcule o  produto escalar destes vetores.*/

#include <stdio.h>
const int num = 5;
int main(){
    float vet1[num], vet2[num];
    printf("Vetor 1:\n");
    for(int i = 0; i < num; i++){
        scanf("%f", &vet1[i]);
    }
    printf("Vetor 2:\n");
    for(int i = 0; i < num; i++){
        scanf("%f", &vet2[i]);
    }
    float escalar = 0;
    for(int j = 0; j < num; j++){
        escalar += vet1[j] * vet2[j];
    }

    printf("Produto escalar: %.1f", escalar);
    return 0;
}
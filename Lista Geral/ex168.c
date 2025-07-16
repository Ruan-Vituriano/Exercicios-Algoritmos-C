/*168. Escreva um programa que leia dois vetores A e B de 5 números inteiros já ordenados  e gere um terceiro vetor também ordenado contendo todos os elementos dos dois  vetores lidos. O terceiro vetor deve ter todos os elementos dos vetores, incluindo as  repetições.  */

#include <stdio.h>
const int tam = 5;
int main(){
    int vetA[tam], vetB[tam], vetC[tam * 2];
    int i, j, cont = 0;
    printf("Vet A:");
    for(i = 0; i < tam; i++){
        scanf("%d", &vetA[i]);
        vetC[cont] = vetA[i];
        cont++;
    }
    printf("Vet B:");
    for(i = 0; i < tam; i++){
        scanf("%d", &vetB[i]);
        vetC[cont] = vetB[i];
        cont++;
    }

    for(i = 0; i < cont; i++){
        int temp;
        for(j = i; j < cont; j++){
            if(vetC[i] > vetC[j]){
                temp = vetC[j];
                vetC[j] = vetC[i];
                vetC[i] = temp;
            }
        }
    }

    for(i = 0; i < cont; i++){
        printf("%d ", vetC[i]);
    }


    return 0;
}
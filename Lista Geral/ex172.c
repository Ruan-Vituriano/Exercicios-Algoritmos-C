/*172. Escreva um programa que leia um vetor de 10 números inteiros e, a seguir, leia um  número inteiro N entre 1 e 10 e verifique quantas sequências de tamanho N formada  por elementos consecutivos existem no vetor, de forma que todos os elementos da  sequência estejam ordenados em ordem crescente. Por exemplo, no vetor (0, 6, 8,  10, 4, 3, 5, 9, 2, 15), podemos encontrar três sequencias de três (N=3) elementos (0,  6, 8), (6, 8, 10), (3, 5, 9) em ordem crescente. 
*/

#include <stdio.h>
const int tam = 10;
int main(){ 
    int vet[tam], num;
    
    printf("Vetor:\n");
    for(int i = 0; i < tam; i++){
        scanf("%d", &vet[i]);
    }
    printf("N:");
    scanf("%d", &num);
    int cont = 0;
    for(int i = 0; i < tam; i++){
        int pos = i, vdd = 1;
        int vezes = 1;
        while(vdd == 1 && vezes < num){
            if(vet[pos] > vet[pos + 1]){
                vdd = 0;
            }
            vezes++;
            pos++;
        }
        if(vdd == 1){
            cont++;
        }
    }

    printf("%d repeticoes na sequencia", cont);
    return 0;
}
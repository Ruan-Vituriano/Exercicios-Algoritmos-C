/*173. Escreva um programa que leia um vetor de 10 números inteiros e, a seguir, leia um  número inteiro N entre 3 e 10 e verifique quantas sequências de tamanho N formada  por elementos consecutivos existem no vetor, de forma que todos os elementos da  sequência formem uma progressão aritmética. Por exemplo, no vetor (0, 4, 8, 10, 4,  9, 12, 15, 2, 15), podemos encontrar duas sequencias de três (N=3) elementos (0, 4,  8), (9, 12, 15) que formam uma progressão aritmética. 
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
        int raio = vet[pos + 1] - vet[pos];
        while(vdd == 1 && vezes < num){
            
            if(vet[pos + 1] - vet[pos] != raio){
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
/*190. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e  verifique quantas linhas nulas existem na matriz.  
*/

#include <stdio.h>
const int ordem = 3;
int main(){
    float matriz[ordem][ordem];
    for(int i = 0; i < ordem; i++){
        for(int j = 0; j < ordem; j++){
            scanf("%f", &matriz[i][j]);
        }
    }

    int nula = 1;
    int cont = 0;
    for(int i = 0; i < ordem; i++){
        nula = 1;
        
        for(int j = 0; j < ordem; j++){
            int num = matriz[i][j];
            if(num != 0){
                nula = 0;
            }
        }
        if(nula){
            cont++;
        }
    }
    printf("A matriz tem %d linhas nulas", cont);

    return 0;
}
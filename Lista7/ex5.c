/*5. Escreva um programa que leia uma matriz quadrada de números inteiros e verifique se
ela é simétrica. A matriz é considerada simétrica se Ai,j=Aj,i para todos os seus
elementos.*/

#include <stdio.h>
const int tam = 3;
int main(){
    int mat1[tam][tam];
    printf("Informe a matriz:\n");

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            scanf("%d", &mat1[i][j]);
        }
        printf("\n");
    }
    int simetrica = 1;
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            if(mat1[i][j] != mat1[j][i]){
                simetrica = 0;
            }
        }
        
    }
    
    if(simetrica){
            printf("Matriz Simetrica");
        } else {
            printf("Nao simetrica");
        }
    return 0;
}
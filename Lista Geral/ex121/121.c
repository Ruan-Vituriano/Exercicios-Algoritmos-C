/*121. Escreva um programa que leia o termo inicial e a razão de uma progressão aritmética e  um número inteiro N e imprima todos os termos da progressão menores ou iguais a N  (caso a razão seja positiva) ou todos os termos maiores ou iguais a N (caso a razão seja  negativa).  */

#include <stdio.h>
#include <conio.h>

void main(){
    int a1, r, N;
    printf("Informe o a1 e a razao:\n");
    scanf("%d%d", &a1, &r);
    printf("Informe o N: ");
    scanf("%d", &N);
    int termo = a1;

    if(r > 0) {
    while(termo <= N){

        printf("%d ", termo);
        termo += r;
        }
   
    } else if (r < 0){
    while(termo >= N){

        printf("%d ", termo);
        termo += r;
        }        
    } else {
        printf("PA infinita com termos: %d", a1);
    }
    
    getch();
} 
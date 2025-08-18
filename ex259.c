/*259. Escreva um subprograma recursivo que receba como entrada um valor em decimal e  imprima o seu valor correspondente em hexadecimal. 
*/

#include <stdio.h>

void hexa(int num){
    if(num <= 0){
        return;
    }
    return hexa(num % 16);
    printf("%d", num);
}


void main(){
    int num;
    scanf("%d", &num);
    hexa(num);
}
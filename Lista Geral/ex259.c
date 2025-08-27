/*259. Escreva um subprograma recursivo que receba como entrada um valor em decimal e  imprima o seu valor correspondente em hexadecimal. 
*/

#include <stdio.h>

void hexa(int num){
        if(num == 0){
        return;
}   
    hexa(num / 16);
    if(num % 16 >= 0 && num % 16 <= 9){
        printf("%d", num);
    } else {
        printf("%c", (num % 16) + 55);
    }
    
} 

void main(){
    int num;
    scanf("%d", &num);
    hexa(num);
}
#include <stdio.h>

int main(){
    int n1, n2, n3, n4;
    printf("Digite os 4 numeros binários:\n");
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);
    int decimal = (n1 * pow(2,3)) + (n2 * pow(2,2)) + (n3 * pow(2,1)) + (n4 * pow(2,0));
    printf("Decimal: %d", decimal);
    
}
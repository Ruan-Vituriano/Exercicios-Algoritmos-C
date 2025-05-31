#include <stdio.h>

void main(){
    int i, fatorial = 1;
    int num;
    scanf("%d", &num);
    int k = 1;
    for(k = 1; k<=10; k++){
        scanf("%d", &num);
        
        for(i = num; i > 0; i--){
        fatorial *= i;
        
    }
    
    printf("Fatorial de %d eh: %d ", num, fatorial);
    }
    
    
}
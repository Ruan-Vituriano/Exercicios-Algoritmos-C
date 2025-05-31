#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    int num, k = 0, soma = 0;
    scanf("%d", &num);

    for(k=1; k<num; k++){
        if(num % k == 0) {
            soma += k; 
        }


    }

    printf("Soma: %d \n", num);

    if(soma == num){
        printf("%d eh um numero perfeito", num);
    } else {
        printf("%d nao eh um numero perfeito", num);
    }
    
    return 0;
}
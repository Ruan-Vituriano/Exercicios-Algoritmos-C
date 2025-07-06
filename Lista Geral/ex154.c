#include <stdio.h>
const int n = 5;
void main(){
    int vetor[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    for(int i = n - 1; i >= 0; i--){
        printf("%d ", vetor[i]);
    }
    getch();

}
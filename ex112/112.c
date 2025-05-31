#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int i;
    int a, b, c;
    b = 1;
    c = 1;
    if(N == 1 || N == 2){
        printf("O enesimo termo eh: 1");
        return 1;
    } else {
        for(i=3; i<=N; i++){
        a = b + c;
        b = c;
        c = a;
        }
    } 
    
    printf("O enesimo termo eh: %d", a);
    return 0;

}
#include <stdio.h>
#include <conio.h>
int main(){
    int a1, r;
    int N; 
    printf("A1 e R:\n");
    scanf("%d%d", &a1, &r);
    printf("N primeiros termos:\n");
    scanf("%d", &N);
    // an = a1 + (n-1).r
    int i, an;
    for(i = 0; i < N; i++){
        an = a1 + i * r;
        printf("%d ", an);
    }

    return 0;
}
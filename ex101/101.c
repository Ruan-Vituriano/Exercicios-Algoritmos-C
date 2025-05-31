#include <stdio.h>

int main(){
    int i, num;
    scanf("%d", &num);

    for(i = 1; i<=num; i+=2){
        printf("%d ", i);
    }

}
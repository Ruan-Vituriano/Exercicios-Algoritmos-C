/*
1957
k = 3
9
*/

#include <stdio.h>

int posnum(int num, int k){
    if(k == 1) return num % 10;
    return posnum(num / 10, k - 1);
}

void main(){
    int num, k;
    scanf("%d%d", &num, &k);
    printf("%d", posnum(num, k));
}
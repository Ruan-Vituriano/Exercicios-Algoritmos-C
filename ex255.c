/*255. Escreva um subprograma recursivo que receba como entrada o termo inicial e a  razão de uma progressão aritmética e um número inteiro positivo N e calcule o  enésimo termo da progressão.  
*/

#include <stdio.h>

int PA(int a1, int r, int N){
    if(N == 1){
        return a1;
    }
    return PA(a1, r, N - 1) + r;
}

void main(){
    int N, a1, r;
    scanf("%d%d", &a1, &r);
    scanf("%d", &N);
    printf("%d", PA(a1, r, N));
}
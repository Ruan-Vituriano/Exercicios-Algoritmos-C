/*MMC*/

#include <stdio.h>

int menorDivisor (int n1,int n2,int n3){
    int fator = 2;
    while(n1%fator!=0 && n2%fator!=0 && n3%fator!=0){
        fator += 1;
    }
    return fator;
}

int mmc(int num1,int num2,int num3){
    if(num1 == 1 && num2 == 1 && num3 == 1){
        return 1;
    }
    int fator = menorDivisor(num1, num2, num3);
    if(num1%fator==0) num1 /= fator;
    if(num2%fator==0) num2 /= fator;
    if(num3%fator==0) num3 /= fator;
    return fator * mmc(num1, num2, num3);
}

void main(){
    int n1,n2,n3;
    scanf("%d%d%d", &n1, &n2, &n3);
    printf("MMC: %d", mmc(n1,n2,n3));
}
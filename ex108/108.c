#include <stdio.h>

int main(){
    int i;
    int cont13 = 0, cont14 = 0, cont15 = 0, cont25 = 0, cont45 = 0, cont65 = 0;
    
    for(i = 1; i <= 20; i++){
        int num;
        scanf("%d", &num);
        num = num / 1000;

        switch (num)
        {
        case 13: cont13++;  break;
        case 14: cont14++;  break;
        case 15: cont15++;  break;
        case 25: cont25++;  break;
        case 45: cont45++;  break;
        case 65: cont65++;  break;
        }

    }
    printf("PT: %d candidatos\n", cont13);
    printf("PTB: %d candidatos\n", cont14);
    printf("PMDB: %d candidatos\n", cont15);
    printf("DEM: %d candidatos\n", cont25);
    printf("PSDB: %d candidatos\n", cont45);
    printf("PCdoB: %d candidatos\n", cont65);

    return 0;
}
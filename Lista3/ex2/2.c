#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    int num, k = 0, a1, r, an;

    printf("Termo inicial e razão da PA: ");
    scanf("%d%d", &a1 , &r);
    printf("Numero de n termos: ");
    scanf("%d", &num);

    // an = a1 + (n-1)r
    for(k = 0; k < num; k++){
        an = a1 + k * r;
        printf("%d ", an);
    }

    return 0;
}
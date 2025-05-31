#include <stdio.h>
#include <math.h>

void main(){
    //n = nota
    float n1, n2, n3;
    scanf("%f%f%f", &n1, &n2, &n3);
    
    float media = (n1 + n2 + n3)/3;
    if(media >= 7){
        printf("Aprovado por media");
    } else if (media >= 4){
        float mediafinal = ((float)25 - (3 * (float)media)) / 2;
        printf("Precisa de %.1f, na prova final!", mediafinal);
    } else {
        printf("Reprovado!");
    }
}
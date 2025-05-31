#include <stdio.h>

int main(){
    int idade;
    scanf("%d", &idade);
    if(idade <= 12){
        printf("Crianca");
    }else if(idade <= 17){
        printf("Adolescente");
    }else if(idade <=59){
        printf("adulto");
    }else{
        printf("Idoso");
    }
}
#include <stdio.h>

void main(){
    char estado;
    printf("Digite seu estado civil: S,C,D,V: ");
    scanf("%c", &estado);
    switch (estado) {
    case 'S': printf("Solteiro"); break;
    case 'C': printf("Casado"); break;
    case 'D': printf("Divorciado"); break;
    case 'V': printf("Viuvo"); break; 
    default: printf("Dados invalidos!"); break;
    }
}
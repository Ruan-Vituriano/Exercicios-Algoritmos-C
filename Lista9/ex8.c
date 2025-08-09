/*8. Escreva um programa que leia um texto de até 20 caracteres e, em seguida, leia um caractere
e verifique quantas vezes esse caractere apareceu no texto informado. A verificação deve ser
feita por meio de uma função.*/

#include <stdio.h>
#include <string.h>

int verif(char texto[], char letra){
    int cont = 0;
    for(int i = 0; texto[i] != '\0'; i++){
        if(texto[i] == letra){
            cont++;
        }
    }
    
    return cont;
}


void main(){
    char texto[21];
    char letra;

    printf("Informe o texto:\n");
    fgets(texto, sizeof(texto), stdin);

    printf("Letra:\n");
    scanf("%c", &letra);

    size_t len = strlen(texto);
    if(texto[len - 1] == '\n'){
        texto[len - 1] = '\0';
    }

    printf("A letra \"%c\" aparece %d vezes.", letra, verif(texto, letra));

}
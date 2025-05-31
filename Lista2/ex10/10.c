#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    char texto[50];
    int i;
    int min = 0, maiuscula = 0, resto = 0, digitos = 0;
    fgets(texto, sizeof(texto), stdin);
    fflush(stdin);
    int tamanho = strlen(texto);
    for(i = 0; i < tamanho; i++){
        if (islower(texto[i])) {
            min++;
        } else if (isupper(texto[i])){
            maiuscula++;
        } else if (isdigit(texto[i])){
            digitos++;
        } else if (texto[i] != '\n') {
            resto++;
        }
        
        
    }
    printf("%d letras minusculas\n", min);
    printf("%d letras maiusculas\n", maiuscula);
    printf("%d Digitos\n", digitos);
    printf("%d Outros caracteres\n", resto);
    return 0;
}

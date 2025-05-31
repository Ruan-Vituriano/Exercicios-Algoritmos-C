#include <stdio.h>
#include <string.h>

int main() {
    char verbo[30];
    char radical[30];
    int len;

    printf("Digite um verbo regular no infinitivo: ");
    scanf("%s", verbo);

    len = strlen(verbo);

    if (len < 3) {
        printf("Verbo inválido.\n");
        return 1;
    }

    // Copia o radical (tudo menos os dois últimos caracteres)
    strncpy(radical, verbo, len - 2);
    radical[len - 2] = '\0';

    char *terminacao = &verbo[len - 2];

    printf("\nPresente do Indicativo:\n");

    if (strcmp(terminacao, "ar") == 0) {
        printf("eu %so\n", radical);
        printf("tu %sas\n", radical);
        printf("ele/ela %sa\n", radical);
        printf("nós %samos\n", radical);
        printf("vós %sais\n", radical);
        printf("eles/elas %sam\n", radical);
    }
    else if (strcmp(terminacao, "er") == 0) {
        printf("eu %so\n", radical);
        printf("tu %ses\n", radical);
        printf("ele/ela %se\n", radical);
        printf("nós %semos\n", radical);
        printf("vós %seis\n", radical);
        printf("eles/elas %sem\n", radical);
    }
    else if (strcmp(terminacao, "ir") == 0) {
        printf("eu %so\n", radical);
        printf("tu %ses\n", radical);
        printf("ele/ela %se\n", radical);
        printf("nós %simos\n", radical);
        printf("vós %sis\n", radical);
        printf("eles/elas %sem\n", radical);
    }
    else {
        printf("Verbo irregular ou não reconhecido.\n");
    }

    return 0;
}

// REVISAR !!!
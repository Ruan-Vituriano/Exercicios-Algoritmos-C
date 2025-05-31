#include <stdio.h>

int main(){
    int num;
    printf("Informe o numero na fila:\n");
    scanf("%d", &num);
    int guiche = (num - 1) % 5 + 1;
    int tempo = ((num - 1) / 5) * 15;
    printf("Carlos sera atendido no guiche %d.\n", guiche);
    printf("Ele esperara %d minutos.\n", tempo);

}
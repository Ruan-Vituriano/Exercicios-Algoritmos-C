#include <stdio.h>
#include <conio.h>
void main() {
    float KB;
    printf("Informe o valor em KB: ");
    scanf("%f", &KB);
    float MB = KB / 1024;
    float bytes = KB * 1024;
    float GB = KB / 1024 / 1024;
    printf("Resultado: %.2f MB\n%.2f bytes\n%.2f GB", MB, bytes, GB);
    getch();

}
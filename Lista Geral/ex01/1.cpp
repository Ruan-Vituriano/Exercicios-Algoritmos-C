#include <stdio.h>

int main() {
	int V1, V2, V3, div;
	printf("Digite um valor:\n");
	scanf("%d", &V1);
	printf("Digite um valor:\n");
	scanf("%d", &V2);
	printf("Digite um valor:\n");
	scanf("%d", &V3);
	
	div = (V1 + V2 + V3) / 3;
	printf("A media: %d.\n", div);
}

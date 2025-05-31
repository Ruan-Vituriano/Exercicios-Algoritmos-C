#include <stdio.h>

int main() {
	int V1, V2, V3, mp;
	printf("Digite um valor:\n");
	scanf("%d", &V1);
	printf("Digite um valor:\n");
	scanf("%d", &V2);
	printf("Digite um valor:\n");
	scanf("%d", &V3);
	
	mp = (V1 * 1 + V2 * 2 + V3 * 2) / 6;
	printf("A media ponderada: %d.\n", mp);
}

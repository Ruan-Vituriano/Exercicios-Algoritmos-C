#include <stdio.h>

int main () {
	int A, area, perim;
	printf("Qual o valor do lado do seu quadrado?\n");
	scanf("%d", &A);
	
	area = A * A;
	printf("Area: %d.\n", area);
	perim = A * 4;
	printf("Perimetro: %d.\n", perim);
}

//Expresiones Booleanas
#include <stdio.h>

int main(void)

{
	int p, q;
	float x = 15, y = 18, z = 20;
	
	p = x==y; // p = 0
	q = (x < y) && (y<=z); // q = 1
	
	printf("el resultado de la comparativa es: %d %d", p, q);
	
	return 0;
}


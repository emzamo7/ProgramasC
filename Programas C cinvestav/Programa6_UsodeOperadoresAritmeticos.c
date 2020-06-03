#include <stdio.h>

int main(void)
{
	int a = 10, b = 3, c;
	float w = 2.0, x = 3.77, y , z;
	
	c = w - x; // la resta es de -1 de tipo entero
	y = a + b; // la suma es 13.0 de tipo flotante
	z = a * x; // la multiplicacion es 37.7 de tipo flotante
	
	printf("los resultados son: %d %f %f", c , y , z);
	return 0;
	
}

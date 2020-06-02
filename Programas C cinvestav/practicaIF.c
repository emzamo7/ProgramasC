#include <stdio.h>

int main(void)
{
	float a, b , c, menor;
	
	printf("Introduce tres numeros a, b y c: ");
	scanf(" %f, %f %f", &a, &b, &c);
	
	if (a < b)
		if (a < c)
			menor = a;
		else
			menor = c;
	else
		if (b < c)
			menor = b;
		else
			menor = c;
			
	printf("El menor es %f\n", menor);
	return 0;		
}

// Operadores logicos
#include <stdio.h>

int main (void)
{
	int p = 10, q = 0, and, or, not;
	
	and = p&&q;   // el resultado es 0
	or = p||q; // el resultado es 1
	not = !p; // el resultado es 0
	
	printf("los resultados son: %d %d %d", and, or, not);
	
	return 0;
	
}

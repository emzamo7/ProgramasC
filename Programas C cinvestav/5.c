#include <stdio.h>

int main(void)
{
	int i, j , k;
	printf("Introduzca los valores de i y j: ");
	scanf("%d %d", &i, &j);
	
	k = i + j -i%j;
	
	printf("El siguiente multiplo mas grande es %d\n",k);
	return 0;
}

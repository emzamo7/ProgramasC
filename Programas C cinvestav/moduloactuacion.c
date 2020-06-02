#include <stdio.h>

int main()

{
int num, modulo;
	printf("Dame un digito para sacarle su modulo: ");
	scanf("%d",&num);
	
	modulo = num % 10;
	
	printf("Su modulo es %d", modulo);
	
}

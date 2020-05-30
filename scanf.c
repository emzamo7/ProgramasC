//una manera diferente para usar scanf
#include <stdio.h>
int main()
{
	int a,b;
	printf("enter 2 numbers:\n");
	scanf("%d %d",&a, &b);
	printf("\nSum: %d", a+b);
	return 0;
	
	
}
//scanf() scans input that matches format specifiers.
/* The & sign b4 the variable name is the address operator. It gives the address, or location in memory, of a variable. This is needed bcz scanf places
an input value at a variable address.

***** scanf() stops reading as soon as it encounters a space, so text such as "Hello World" is two separate inputs for scanf() */

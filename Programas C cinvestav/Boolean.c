#include <stdio.h>
#include <stdlib.h>

void clrscr()
{
	system("@cls||clear");
}
int main (int argc, char*argv[])
{
	#include "Boolean.h"
	printf("TDA Boolean.\n");
	Boolean a=false;
	Boolean b=_init(false);
	printf("a= %u\n", a);
	printf("b= %u\n", b);
	printf("a AND b =%u\n", _and(a,b));
	printf("a OR b =%u\n", _or(a,b));
	printf("a --> b = %u\n", _implication(a,b));
	printf("a <--> b = %u\n\n", _iff(a,b));
}

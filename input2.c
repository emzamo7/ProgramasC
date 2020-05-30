//GETS: the gets() function is used to read input as an ordered sequence of characters, also called a string. A string is stored in a char array.
#include<stdio.h>

int main()
{
	char a[100];
	
	gets(a);
	
	printf("You entered: %s", a);
	
	return 0;
	
}
// Here we stored the input in an array of 100 characters

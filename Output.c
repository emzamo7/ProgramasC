//OUTPUT
//putchar() Outputs a single character

/*#include <stdio.h>
int main()
{
	char a = getchar();
	
	printf("You entered: ");
	putchar(a);
	
	return 0;	
}*/
// the input is stored in the variable a

//The puts() function is used to display output as a string. A string is stored in a char array. for example:
#include <stdio.h>
int main()
{
	char a[100];
	gets(a);
	
	printf("you entered: ");
	puts(a);
	
	return 0;
}
//Here we stored the input in an array of 100 characters.

/*Variable is a name for an area in memory//The value for a declared variable is changed with an assignment statement. For example:, the following
statements declare an integer variable my_var and then assigns it the value 42:

int my_var;
my_var = 42

You can also declare and initialize (assign an initial value) a variable in a single statement:
int my_var = 42;

****************
Let's define variables of different types, do a simple math operation, and output the results:
*/

#include <stdio.h>

int main()
{
	int a,b;
	float salary = 56.23;
	char letter = 'Z';
	a = 8;
	b = 34;
	int c = a + b;
	
	printf("%d \n", c);
	printf("%.2f \n", salary);
	printf("%c \n", letter);
	
	return 0;
}

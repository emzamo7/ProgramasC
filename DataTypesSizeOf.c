/*The program output displays the corresponding size in bytes for each data type. The printf statements in this program have two arguments. the first
 is the output strig with a format specifier (%ld), while the nxt argument returns the sizeof value. In the final output, the %ld (for long decimal)
is replaced by the value in the second argument.
**************************NOTES*****************
printf : function used for generating output
string: an ordered sequence of characters
argument: a piece of data that is passed into a function or program. Also known as parameter
sizeof: returns the size of an object in bytes
argument: a piece of data that is passed into a function or program. Also known as parameter

C does not have a boolean type

A printf statement can have multiple format specifiers with corresponding arguments to replace the specifiers. Format specifiers are also referred to as conversion
specifiers*/



#include <stdio.h>
int main()
{
	printf("int: %ld \n", sizeof(int));
	printf("float: %ld \n", sizeof(float));
	printf("double: %ld \n", sizeof(double));
	printf("char: %ld \n", sizeof(char));
	
	return 0;
}

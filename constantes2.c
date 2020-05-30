//canstantes 2: DEFINE
#include <stdio.h>

#define PI 3.14

int main()
{
	printf("%.3f",PI);
	return 0;	
}
/*B4 compilation , the preprocessor replaces every macro identifier in the code with its corresponding value from the directive. In this case,
every occurrence of PI is replaced with 3.14. The final code sent to the compiler will already have the constant values in place.

The difference between const and #define is that the former uses memory for storage and the latter does not.
* don-t put a semicolon character (;) at the end of #define statements. This is a common mistake*/

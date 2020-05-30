//una manera diferente para usar scanf
//#include <stdio.h>
/*int main()
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
//**************************************************************************************************

/*#include <stdio.h>
int main()
{
	int x;
	float num;
	char text[20];
	scanf("%d %f %s", &x, &num, text);
	return 0;
	
	
	
	
	
}
/*Typing 10 22.5 abcd and then pressing enter assigns 10 to x, 22.5 to num , and abcd to text. Note that the & must be used to access the variable addresses
The & isn't needed for a String because a string name acts as a pointer - stores the address of an object-.

Format specifiers begin with a percent sign % and are used to assign values to corresponding arguments after the control string. BLANKS, TABS, AND NEWLINES ARE 
IGNORED.

A format specifier can include several options along with a conversion character:

%[*][max_field]conversion character
The optional * will skip the input field.
The optional max_width gives the maximun number of characters to assign to an input field. The conversion character converts the argument, if necessary, to the indicated type:

d - decimal
c - character
s - string
f - float
x - hexadecimal*/

#include<stdio.h>
int main()
{
	int x;
	float y;
	char text[20];
	
	scanf("%d %f %15s", &x, &y, text);
	// input: 1234 5.7 elephant
	printf("%d\n %.2f\n %s", x , y, text);
	// output: 12 34 eleph
	
	return 0;
	
	
	
}


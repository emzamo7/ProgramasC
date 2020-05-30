/*Type Conversion

When a numeric expression contains operands of different data types, they are automatically converted as necessary in a process called type conversion.
For example, in an operation involving both floats and ints, the compiler will convert the int values to float values.
In the following program, the increase variable is automatically converted to a float:*/
/*#include <stdio.h>

int main() {
  float price = 6.50;
  int increase = 2;
  float new_price;

  new_price = price + increase;
  printf("New price is %4.2f", new_price);
  /* Output: New price is 8.50 

  return 0;
}*/

/*Note the format specifier includes 4.2 to indicate the float is to be printed in a space at least 4 characters wide with 2 decimal places.
When you want to force the result of an expression to a different type you can perform explicit type conversion by type casting, as in the statements:*/
#include <stdio.h>

int main()
{

float average;
int total = 23;
int count = 4;

average = (float) total / count;

printf("el resultado es %8.4f",average);
/* average = 5.75 */
return 0;
}

/*Without the type casting, average will be assigned 5.
Explicit type conversion, even when the compiler may do automatic type conversion, is considered good programming style.*/

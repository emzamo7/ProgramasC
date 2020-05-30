/*Division
C has two division operators: / and %.
The division / operator performs differently depending on the data types of the operands. When both operands are int data types, integer division, also called truncated division, removes any remainder to result in an integer. When one or both operands are real numbers (float or double), the result is a real number.
The % operator returns only the remainder of integer division. It is useful for many algorithms, including retrieving digits from a number. Modulus division cannot be performed on floats or doubles.
The following example demonstrates division:*/
#include <stdio.h>

int main() {
  int i1 = 10;
  int i2 = 3;
  int quotient, remainder;
  
  float f1 = 4.2;// <====== checar esto: ambas variables son flotantes, por lo cual...
  float f2 = 2.5;
  float result; // <======= el resultado de esta division tiene que ser declarado flotante tambien.

  quotient = i1 / i2; // 3
  remainder = i1 % i2; // 1
  result = f1 / f2; // 1.68 // <===== como aqui
  
  printf(" los resultados son %d %d %.2f", quotient, remainder, result);
  return 0;
}

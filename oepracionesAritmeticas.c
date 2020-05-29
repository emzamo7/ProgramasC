//programa que ejercita operaciones aritmeticas

#include <stdio.h>
int main()
{
	int num1;      // declaracion de variables
	int num2;
	int resultadoSuma,resultadoResta, resultadoProducto, resultadoModulo;
	int resultadoDivision;
	
	printf("ingrese el primer valor\n"); //\n salto de linea
	scanf("%d",&num1);  //  %d = entero decimal, & dirige hacia donde se almacenara ese valor 
	printf("ingrese el segundo valor\n");
	scanf("%d",&num2);
	
	resultadoSuma = num1 + num2;
	resultadoResta = num1 - num2;
	resultadoProducto = num1 * num2;
	resultadoDivision = (num1/num2);
	resultadoModulo = num1%num2;	
	
	printf("El resultado de la suma es: %d\n", resultadoSuma);
	printf("El resultado de la resta es: %d\n", resultadoResta);
	printf("El resultado del producto es: %d\n", resultadoProducto);
	printf("El resultado de la Division es: %d\n", resultadoDivision);//esta haciendo division entera
	printf("El resultado del modulo es: %d\n", resultadoModulo);
	
	return 0;
	
}

/***********************************************************
Escriba un programa para redondear un entero i al siguiente multiplo
mas grande de otro entero j.
	*Entrada
		Introduzca los valores de i y j: 256 7
	*Salida
		El siguiente multiplo mas grande es 259
		
		el ejemplo es el siguiente:
		
		256 + 7 - 256%7
		263 - 4 (modulo de 256 y 7) = 259.
		
		si el modulo fuera exacto, nos daria 0, entonces solo seria la 
		suma de i + j: 259 + 7 - 259%7 = 266
************************************************************/
#include <stdio.h>

int main(void)
{
	int i, j , k;
	
	printf("introduzca los valores de i y j: ");
	scanf("%d %d", &i, &j);
	
	k = i + j - i%j;
	
	printf("El siguiente multiplo mas grande es %d\n", k);
	return 0;
	
	
}

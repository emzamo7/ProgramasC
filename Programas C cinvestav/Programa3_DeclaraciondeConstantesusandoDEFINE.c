// Declaracion de constantes usando DEFINE
#include <stdio.h>

#define val 10
#define floatVal 4.5
#define charVal 'G' // comillas simples
#define stringVal "ABC" // comillas dobles

int main (void)

{
		printf("Constante entera: %d\n", val);
		printf("Constante de punto flotante: %.1f\n", floatVal);
		printf("Constante caracter: %c\n", charVal);
		printf("Cadena constante: %s\n", stringVal);
	
		return 0;	
	
}

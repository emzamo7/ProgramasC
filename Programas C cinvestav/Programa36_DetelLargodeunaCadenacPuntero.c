#include <stdio.h>

int largo(char *);

int main(void)

{
	static char *cadena = "hola, mundo";
	printf("%d \n", largo(cadena));
	
	return 0;
}
/* Funcion que devuelve el largo de la cadena */

int largo(char *str)
{
	char *p = str;
	while(*p != '\0')
		p++;
	return((int)(p-str));
}

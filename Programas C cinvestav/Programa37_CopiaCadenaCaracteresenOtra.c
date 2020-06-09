#include <stdio.h>

void copiar(char *, char *);

int main(void)
{
	char cadena1[81], cadena2[81];
	
	printf("Introduce una cadena: ");
	gets(cadena1);
	
	copiar(cadena2, cadena1);
	printf("La cadena copiada es %s\n", cadena2);
	
	return 0;
}
void copiar(char *p, char *q)
{
	while((*p++ = *q++) != '\0');
	
}

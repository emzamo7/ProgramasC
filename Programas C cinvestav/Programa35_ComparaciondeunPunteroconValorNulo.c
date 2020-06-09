#include <stdio.h>
#define FILAS 10
#define COLS 60

int main(void)
{
	int n, i = 0;
	char *fin; /*Valor devuelto por gets */
	char lista[FILAS][COLS];
	
	puts("Para finalizar pulse Ctrl+Z"); 
	
	do{
		printf("\nNombre completo: ");
		fin = gets(lista[i++]);
	}while(fin != NULL && i < FILAS);
	
	if(i < FILAS) i--;/*elimina la ultima entrada Ctrl+Z
	Escribir datos en pantalla*/
	printf("\n\n");
	for(n = 0; n< i; n++)
		printf("%s \n", lista[n]);
	
	return 0;
	
}

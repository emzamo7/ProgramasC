#include <stdio.h>
int main()
{
	char nombre[50];
	int dia, mes, anio;
	
	printf("Por favor ingrese su nombre, con ""_"" para indicar espacios: ");
	scanf("%s", &nombre);
	
	printf("Por favor ingrese su fecha de nacimiento en el siguiente formato: # de mes/fecha/anio: ");
	scanf("%i %i %i", &dia, &mes, &anio);
	
	printf("Usted ingreso: \nnombre %s", nombre);
	printf("\n %i/%i/%i,", dia,mes,anio );
	return 0;
	
}

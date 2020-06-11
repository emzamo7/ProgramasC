

#include<stdio.h>
#include<conio.h>

void suma (int a, int b); //declaracion de la funcion - prototipo
void mayor (int a, int b); // Tipo de dato, nombre de la funcion y el tipo y nombre de los argumentos

main()

{
	
	int a,b;
	printf("ingrese el valor de a:\n");
	scanf("%d", &a);
	printf("Ingrese el valor de b:\n");
	scanf("%d", &b);
	suma(a,b); // llamado de la funcion
	mayor(a,b); // unicamente el nombre de la funcion y de los parametros
	getch();
	return 0;
}
//*****************************************************
void suma(int a, int b) // Def de la funcion
{
	int sum;  //declaracion de la variable local int
	sum= a+b;
	printf("El valor de la suma es %d:\n\n", sum);
	

} // fin de la funcion suma
//********************************************************
void mayor(int a, int b) // Def de la funcion de comparacion cual es el mayor
{
	if (a==b)
		printf("Son iguales\n\n");
	else
	{
		if (a> b)
			printf("El valor de a es mayor que el de b\n\n");
		else
			printf("El valor de b es mayor que de a\n\n");
		
	}
}

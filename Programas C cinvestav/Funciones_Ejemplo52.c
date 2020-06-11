/* Ejercicio de programacion C - Funciones -
URL : programandoenc.over-blog.es/article-32481588.html

Disene un programa que dado un numero entero y mayor que cero, determinar si es o no un numero primo.
*/
#include <stdio.h>
#include <conio.h>
void primo (int numero);

main()
{
	int numero, ban = 1;
//lrscr();
	while(ban==1)
	{
		printf("Introduzca el numero por favor: \n");
		scanf("%d", &numero);
		while(numero<0)
		{
			printf("ERROR, el valor del numero debe ser mayor que cero\n");
			scanf("%d", &numero);
		}
		primo(numero);
		printf(" Otro numero (si=1 y No=0)?\n");
		scanf("%d", &ban);
	}
	getch();
	return 0;
}

//*******************************************

void primo (int numero)
{
	int div, primo = 1;
	for(div=2; div <numero; div++)
	{
		if (numero%div==0)
		{
			primo=0;
			printf("%d NO es primo \n\n\n", numero);
			return 0;
		}
		else
			primo=1;
	}
	if(primo!=0)
		printf("%d es primo\n\n\n", numero);
	
}

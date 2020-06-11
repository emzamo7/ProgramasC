/* Ejemplo 5.3
Disene un programa, que dado un numero entero y mayor que cero, muestre su factorial.
*/

#include <stdio.h>
#include <conio.h>

long int factorial(long int num);
main()
{
	int num, ban = 1;
	//clrscr();
	while(ban==1)
	{
		printf("Ingrese el valor del numero por favor: \n");
		scanf("%d",&num);
		while(num<0)
		{
		printf("ERROR, el valor del numero debe ser mayor que cero:\n");
		scanf("%d", &num);
		}
		printf("El valor del factorial es %ld\n\n", factorial(num));
		printf("Desea realizar otro calculo?Si=1 y No=0\n");
		scanf("%d", &ban);
	}
	getch();
	return 0;
}

//******************************************************

long int factorial(long int num)
{
	long int sum=1, i;
	for(i=2;i<=num; i++)
	{
		sum=sum*i;
		}
	return(sum);
}



//reglas de precedencia: uso de parentesis, orden de operaciones

#include <stdio.h>
int main()
{
int num1, num2, resultado1, resultado2;
int a= 12;
int b= 3;

printf("Ingrese el primer valor \n");
scanf("%d",&num1);
printf("Ingrese el 2o valor \n");
scanf("%d",&num2);

resultado1 = a * b * num1 + num2;

resultado2 = (a * b) * (num1 + num2);
	
printf("el resultado 1 sin respetar parentesis es %d\n", resultado1);	
printf("El resultado respetando valores es %d\n", resultado2);	
	
return 0;
}

/*******************************************************************
Ejercicio 1.c
Considere un cajero automatico en el cual existen billetes de ocho denominaciones: 1, 2 ,5 ,10 , 50, 100, 500, 1000. Si se introduce por teclado una
cantidad entera N de dinero que se desea retirar, escriba un programa para calcular el menor numero de billetes que combinados dan la cantidad N

*Entrada
	Introduce la cantidad que deseas retirar: 1547
	
*Salida
$1000: 1
$500 : 1
$100 : 0
$50: 0
$10: 4
$5: 1
$2: 1
$1: 0

Numero de billetes: 8
*******************************************************************/

#include <stdio.h>

int main (void)
{
int N, n1000, n500, n100, n50, n10, n5, n2, n1, T;	
printf("Introduce la cantidad que deseas retirar: ");
scanf("%d", &N);

n1000 = N/1000; N = N%1000;	
n500 = N/500; N= N%500;
n100 = N/100; N= N%100;
n50 = N/50; N = N%50;
n10 = N/10; N = N%10;
n5 = N/5; N= N%5;
n2 = N/2; N= N%2;
n1 = N/1; N = N%1;

T = n1000 + n500 + n100+ n50 + n10 + n5 + n2 + n1;

printf("\n $1000 : %d", n1000);
printf("\n $500 : %d", n500);
printf("\n $100 : %d", n100);
printf("\n $50 : %d", n50);
printf("\n $10 : %d", n10);
printf("\n $5 : %d", n5);
printf("\n $2 : %d", n2);
printf("\n $1 : %d", n1);
printf("\n Numero de billetes : %d\n", T);
	
return 0;
}

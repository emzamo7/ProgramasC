/****************************************************************************************************************************************
Ejercicio 1.e

Escriba un programa que reciba las coordenadas cartesianas (x,y) de un punto y las convierta a  coordenadas Polares (r, theta), donde:

r = sqrt(x^2 + y^2) y tetha = arctan(y/x),

y que convierta a grados el valor de theta. Para realizar este ejercicio se debe considerar lo siguiente:

	* Se requiere la biblioteca math.h para utilizar funciones matematicas.
	* Usar la funcion atan2 en vez de atan.
	
	* ENTRADA
		Ingrese las coordenadas Cartesianas (x,y): 12 12
	* Salida
		Las coordenadas polares son (16.971, 45.000)

*****************************************************************************************************************************************/

#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main (void)

{
	float x, y , r, theta;
	
	printf("Ingrese las coordenadas Cartesianas (x,y): ");
	scanf("%f %f", &x, &y);
	
	r = sqrt(x*x + y*y);
	theta = atan2(y,x)*180.0/PI;
	
	printf("Las coordenadas polares son (%.3f, %.3f)\n", r, theta);
	return 0;
	
}

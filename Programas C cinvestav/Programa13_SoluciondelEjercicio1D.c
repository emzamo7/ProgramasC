/********************************************************************************************************************************
Ejercicio 1.d

Escriba un programa que reciba los valores en grados de latitud y longitud de dos lugares sobre la Tierra y calcule la distancia en kilometros
entre estos puntos. La formula para calcular la distancia es:

D = 2r arcsin(sqrt ( VER FORMULA EN LA PRESENTACION)

donde r = 6335.439 es el diametro aprox de la Tierra en km, son la latitud y longitud del punto 1, y () son la latitud y longitud del punto 2. Para realizar
este ejercicio se debe considerar lo siguiente:

* El argumento de cada funcion trigonometrica esta dado en radiones.
* Se requiere la biblioteca math.h para utilizar funciones matematicas.

ENTRADA

	Ingrese la latitud y longitud del punto 1: 53.320 -1.729
	Ingrese la latitud y longitud del punto 2: 53.318 -1.699

Salida

	La distancia entre los puntos 1 y 2 es 1.993848

*****************************************************************************************************************************/
#include <stdio.h>
#include <math.h>

#define PI 3.14159
#define R 6335.439

int main(void)
{
	float L1, L2, G1, G2, D, aux;
	
	printf("Ingrese la latitud y longitud del punto 1: ");
	scanf("%f %f", &L1, &G1);
	
	printf("Ingrese la latitud y longitud del punto 2: ");
	scanf("%f %f", &L2, &G2);
	
	L1 = L1 * PI / 180.0;
	L2 = L2 * PI / 180.0;
	G1 = G1 * PI / 180.0;
	G2 = G2 * PI / 180.0;
	
	aux = pow(sin((L2 - L1)/2),2) + cos(L1) * cos(L2)* pow(sin((G2 - G1)/2),2);
	D = 2 * R * asin(sqrt(aux));
	
	printf("La distancia entre los puntos 1 y 2 es %f km\n", D);
	return 0;
}






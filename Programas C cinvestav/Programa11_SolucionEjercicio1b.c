/**************************************************************************
Ejercicio 1.b
El peso de una mercancia dada en kilogramos (kg) es la entrada a traves del
teclado. Escriba un programa para convertir e imprimir este peso en gramos (g)
quintales (qt), toneladas metricas (ton) y libras (lbs), considerando hasta
3 digitos decimales. Las equivalencias que deben tomarse en cuenta son
1 kg = 1000 g
1 qt = 100 kg
1 ton = 1000 kg
1 kg = 2.204 lbs

	* Entrada
		Introduzca el peso en kilogramos : 45.87
		
	* Salida
		El peso en gramos es 45870.000
		el peso en quintales es 0.459
		El peso en toneladas metricas es 0.046
		El peso en libras es 101.097
***************************************************************************/

#include <stdio.h>

int main (void)

{
	float convGr, convQt, convTon, convLbs, pesoKg;
	
	printf("Introduzca el peso en kgs: \n");
	scanf("%f",&pesoKg);
	
	convGr = pesoKg * 1000;
	convQt = pesoKg / 100.0;
	convTon = pesoKg / 1000.0;
	convLbs = pesoKg * 2.204;
	
	printf("El peso en gramos es: %.2f\n", convGr );
	printf("El peso en Quintales es: %.2f\n", convQt);
	printf("El peso en toneladas es: %.2f\n", convTon);
	printf("El peso en Libras es: %.2f\n", convLbs);
	
	return 0;
}



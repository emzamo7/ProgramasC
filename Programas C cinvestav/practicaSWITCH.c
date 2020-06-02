#include <stdio.h>
int main(void)
{
	char letra;
	printf("Introduzca una letra: ");
	scanf(" %c", &letra);
	
	switch(letra)
	{
		case 'a' | 'A':
			printf("La letra %c es vocal\n", letra);
			//break;
		case 'e' | 'E':
			printf("La letra %c es vocal\n", letra);
			//break;
		case 'i' | 'I':
			printf("La letra %c es vocal\n", letra);
			//break;
		case 'o' | 'O':
			printf("La letra %c es vocal\n", letra);
			//break;
		case 'u' | 'U':
			printf("La letra %c es vocal\n", letra);
			//break;
		default:
			printf("La letra %c es consonante\n", letra);
			break;
	}
	return 0;
}

#include <stdio.h>

int main(void)
{
	char ch;
	
	printf("Ingresa un caracter: ");
	scanf("%c", &ch);
	
	if (ch >= 0 && ch <= 255){
		if (ch >= 65 && ch <= 90)
			printf("El caracter %c es una letra mayuscula\n", ch);
		else if (ch >= 97 && ch <= 122)
			printf("El caracter %c es una letra minuscula\n", ch);
		else if (ch >= 48 && ch <= 57)
			printf("El caracter %c es un digito\n", ch);
		else 
			printf("El caracter %c es un simbolo especial\n", ch);
	}
	else
		printf("Caracter no registrado\n");
	
	return 0;
	
	
}

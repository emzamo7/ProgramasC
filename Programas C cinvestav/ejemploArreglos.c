#include <stdio.h>
#define FILAS 3
#define COLS 3

int main(void)

{
	float t[FILAS][COLS];
	int f, c;
	
	for(f=0; f<FILAS; f++)
	{
		printf("\nDatos para la fila %d\n",f);
		for(c=0; c<COLS; c++)
			scanf("%f", &t[f][c]);
	}
	return 0;	
}

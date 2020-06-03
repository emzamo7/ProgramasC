/********************************************************************************************************************************************

Ejercicio 3.c Dada una matriz bidimensional de tamanio M x N, escriba un programa que visite todos sus elementos con un camino en forma de espiral comenzando
en la casilla (0,0), como se muestra en la siguiente figura: (VER FIGURA SLIDE 112)

	*Entrada 
		Ingresa el tamano M x N de la matriz: 5 4
		Introduce 20 elementos en la matriz:
		
		1 2 3 4 14 15 16 5 13 20 17 6 12 19 18 7 11 10 9 8
		
	*Salida
	
		La matriz de tamano 5x4 es:
		
		1	2	3	4
		14	15	16	5
		13	20	17	6	
		12	19	18	7
		11	10	9	8
		
	La vista en forma espiral es:
	
	1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20

********************************************************************************************************************************************/
#include <stdio.h>
#define MAX_ROWS 20
#define MAX_COLS 20

int main()
{
	int arr[MAX_ROWS][MAX_COLS];
	int i , j , N, M, toprow, bottomrow, leftcol, rightcol;
	
	printf("Ingresa el tamanio MxN de la matriz: ");
	scanf("%d %d", &N, &M);
	
	printf("Introduce %d elementos en la matriz: ", N*M);
	for(i=0; i<N; i++)
	{
		for (j=0; j<M; j++)
			scanf("%d", &arr[i][j]);
	}
	printf("la matriz de tamano %dx%d es:\n", N,M);
		for(i=0; i<N; i++)
		{
			printf("\n");
			for(j=0; j<M; j++)
				printf("%d\t", arr[i][j]);
		}
	printf("\nLa vista en forma de espiral es: \n");
	
	toprow = 0;
	bottomrow = N - 1;
	leftcol = 0;
	rightcol = M - 1;
	
	while(toprow<=bottomrow && leftcol<=rightcol)
	{
		for(i=leftcol; i<= rightcol; i++)
			printf("%d ", arr[toprow][i]);
		toprow++;
		
		for(i=toprow; i<=bottomrow; i++)
			printf("%d ",arr[i][rightcol]);
		rightcol--;
		
		for(i=rightcol; i>=leftcol;i--)
			printf("%d ",arr[bottomrow][i]);
		bottomrow--;
		
		for(i=bottomrow; i>=toprow;i--)
			printf("%d ",arr[i][leftcol]);
		leftcol++;
	}
	
	printf("\n \n");
	
	
	return 0;
}



#include <stdio.h>
#include <stdlib.h>

int suma(int *lon, int n){
	printf("lon: %p n: %p n: \n", lon, &n, n);
	if (n== 0) return 0;
	return lon[0] + suma(lon+1, n-1);
	//return 0;
	
	
}

int main(int argc, char const *argv[])
{
	printf ("%i\n", argc);
	printf("%i\n", argv[1]);
	int lon[] = {1,2,3,4,5,6};// [4+4+4+4+...]/4 4 bytes. entre 4 da la longitud de la lista
	printf("lon %p\n", lon);
	int n = sizeof(lon)/sizeof(lon[0]);
	printf("suma %i\n", suma(lon, n));
	return 0;
	
}

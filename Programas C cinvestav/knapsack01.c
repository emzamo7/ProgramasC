//knapsack
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int knapsack(int *c, int *p, int g, int n){
	if (g <=0) return 0;
	if(n <= 0) return 0;
	if(g <= c[n-1])
	
		return knapsack(c, p, g, n-1);
	return max( p[n-1] + knapsack(c, p, g -c[n-1], n-1), knapsack(c, p, g, n-1));
}

int main(int argc, char const *argv[])
{
	
//	int c[] = {15, 2, 3, 9, 10};
//	int p[] = {4, 11, 12, 12, 10};
//	int g = 15;
//	int n = sizeof(c)/sizeof(c[0]);
	
	int g;
	int n;
	int c_temp, p_temp;
	scanf("%i", &g);
	scanf("i%", &n);
	int *c = (int *)malloc (sizeo(int)*n); //variable de tipo stack y tipo heap
	int *p = (int *) malloc (sizeof(int)*n);;
	for (int i = 0; i < n; i++)
	{
		
		scanf("%i %i", &ctmp, & p_tmp );
		c[i] = c_tmp;
		p[i] = p_tmp;
	}
	
	
	printf("%p, %p", c , &c);
	printf("La puntuacion maxima es: % i\n", knapsack(c, p, g, n ));
	
	free(c);
	free(p);
	return 0;
}

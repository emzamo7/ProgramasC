#include <stdio.h>
#include <math.h>
#define NUM 10000

float media(float[NUM], int);
float desvest(float[NUM], float, int);
float max(float[NUM], int);
float min(float[NUM], int);

int main(void)
{
	float mean, std, mx, mn;
	float arr[NUM]={};
	int i, N;
	
	printf("Ingresa el tamano del arreglo: ");
	scanf("%d", &N);
	
	printf("Ingresa %d numeros:\n", N);
	for (i = 0; i <N; i++)
		scanf("%f", &arr[i]);
		
	mean = media(arr, N);
	std = desvest(arr, mean, N);
	mx = max(arr, N);
	mn = min(arr,N);
	
	printf("Media = %5.3f\n", mean);
	printf("Desv. Est. = %5.3f\n", std);
	printf("Maximo = %5.3f\n", mx);
	printf("Minimo = %5.3f\n",mn);
	
	return 0;
}


float media(float vec[NUM], int n)
{
	float s = 0;
	for (int i=0; i<n; i++)
		s = s + vec[i];
	return s/n;
}


float desvest(float vec[NUM], float m, int n)
{
	float s = 0;
	for (int i = 0; i<n; i++)
		s = s + (vec[i]- m) * (vec[i] - m);
	return sqrt(s/(n - 1));
}

float max(float vec[NUM], int n)
{
	float mx = vec[0];
	for (int i = 1; i<n; i++)
		mx = (vec[i] > mx) ? vec[i] : mx;
	return mx;
}

float min(float vec[NUM], int n)
{
	float mn = vec[0];
	for (int i = 1; i<n; i++)
		mn = (vec[i] < mn) ? vec[i] : mn;
	return mn;
}


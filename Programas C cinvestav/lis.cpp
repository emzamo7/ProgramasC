#include <stdio.h>
#include <stdlib.h>

int global=5;
long long factorial(int n) { // DIRECTA
	//printf("n: %p %i\n")
	if( n== 0) return 1;
	return n * factorial (n - 1);
	
}

void factorial_tail(int n, long long result){
	if(n == 0) return 1;
	return n* factorial (n-1);
	
}

long long co_factorial_b(int n);

long long co_factorial_a(int n){
	if(n == 0) return 1;
	return n * co_factorial_b (n-1);
}

long long co_factorial_b(int n){
	if(n== 0) return 1;
	return n * co_factorial_a (n - 1);
}



int main(int argc, char const *argv[])
{
	
	int local = 3;
	int local2 = 3;
	static int estatica = 8;
	printf("%p %i\n", &local, local);
	
	printf("%p %i\n", &local2, local2);
	printf("%p %i\n", & estatica, estatica);
	printf("%p %i\n", &global, global);
	printf("%lli\n", factorial(local));
	return 0;
}

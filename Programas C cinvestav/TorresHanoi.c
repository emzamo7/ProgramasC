// Torres de Hanoi

#include <stdio.h>
#include <stdlib.h>

void torres_hanoi(int n, char from, char to, char aux) {
	if (n == 0) return;
	torres_hanoi(n-1, from, aux, to);
	printf("pasa de %c hasta %c\n", from, to);
	torres_hanoi(n-1, aux, to, from);
}

int main(int argc, char const *argv[])
{
	if (argc < 2){
		printf("Pasa el numero de discos como parametro");
		exit(1);
	}
	int n = atoi(argv[1]);
	torres_hanoi(n,'A','B','C');
	return 0;
}

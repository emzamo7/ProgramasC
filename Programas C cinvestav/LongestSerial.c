#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <climits>

using namespace std;
int lis(int *sequen,int idx,int n, int prev  ){
	
	if (idx >= n) 
	return 0;
	out = lis(sequence, idx + 1, n, prev);
	
	int in = INT_MIN;
	if (prev < sequence[idx])
		in = 1 + lis(sequence, idx + 1, n, sequence[idx]); // la diferencia de tamanio entre los numeros
	return max(in, out);
}

int main(int argc, char const *argv[])
{


	int sequence[] = {0, 8 , 4, 12, 2 ,10, 6 , 14, 1, 9 , 5 , 13, 3,11, 7, 15};
	int n = sizeof(sequence)/sizeof(sequence[0]);
	printf("%i\n", lis(sequen, 0, n, INT_MIN ));

return 0;
}

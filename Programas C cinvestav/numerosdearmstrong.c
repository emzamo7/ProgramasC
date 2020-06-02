#include<stdio.h>
#include<math.h>

int main (void)

{
	int num, n , d1, d2,d3;
	
	for (num = 1; num <= 500; num++)
		{
			n =num;
			
			d3= pow(n%10,3);
			n = n/10;
			d2= pow(n/10,3);
			n = n/10;
			d1 = pow(n/10, 3);
			n = n/10;
			
			if (d1 + d2 + d3 == num)
				printf("%d\n", num);
			
		}
	return 0;
		
}

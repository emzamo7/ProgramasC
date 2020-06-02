#include<stdio.h>
int main()
{
int a1 = 5 * 3 + 2 - 4;
int a2 = 2 + 4 + 3 * 5/3 - 5;
double a3 = 5%3 & 4 + 5* 6;
double a4 = 5 & 3 && 4 ||  5 | 6; // & binario y | binario
/* int res = 5&3
101    -> 5
011   -> 3
------------
001    -> 1  */

/* int res= 5 or 6;
101      5
110      6
----------
111      7
*/
printf("%i\n", a1);
printf("%i\n", a2);
printf("%d\n", a3);
printf("%d\n", a4);

return 0;	
}



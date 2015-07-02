#include <stdio.h>

/* make a file named lcqh01.c */
/* write a C program to compute the following */
/* the result of b squared - 4 times a times c */
/* where a is 5, b is 4, c is 3 */
/* print out the answer */
/* use variables named a, band c and a variable to hold the result */
/* C does not have a built in square function nor does it have a "to the power ofâ operator*/

int main()
{
	int a=5, b=4, c=3;
	int result;

	result = b*b - 4*a*c;
	printf("Result %i^2 - 4*%i*%i = %i\n",b,a,c,result);

	return 0;
}

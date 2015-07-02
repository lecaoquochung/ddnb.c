#include <stdio.h>

int main()
{
	/* gcc basic_data_types.c -DCASE1 -o basic_data_types1 */
	/* gcc basic_data_types.c -DCASE2 -o basic_data_types2 */
	/* all scalar variables may be initialized when defined */
	/* program to show declaring variables */
	/* and initializing variables */

	#ifdef CASE1
		char	c = 'a';
		double 	d = 1.23e+45;
		float 	f = 123.45;
		int	i = 321;
	#endif

	/* EXERCISE, change these to valid values */
	#ifdef CASE2
		double 	d = 'd';
		float	f = 2;
		int	i = 1.23;
		char	c = d;
	#endif
	
	/* display character as character */
	printf("c=%c \n",c);
	/* display character as integer */
	printf("c=%d \n\n",c);
		 
}


#include <stdio.h>

int main()
{
	int i,x;
	
	/* side effect post increment */
	i=0;
	x=i++;
	printf("Post increment: i=0, x=i++ i = %i x = %i\n",i,x);

	/* side effect pre increment */
	i=0;
	x=++i;
	printf("Pre increment: i=0, x=++i i = %i x = %i\n",i,x);
	
	/* side effect post decrement */
	i=0;
	x=i--;
	printf("Post decrement: i=0, x=i-- i = %i x = %i\n",i,x);

	/* side effect pre increment */
	i=0;
	x=--i;
	printf("Pre decrement: i=0, x=--i i = %i x = %i\n",i,x);

	/* compound assignments */
	i = 5;
	i+=2; /* i = i + 2 */
	printf("Plus Compound: i=5, i+=2 Result:  %i\n",i);

	i = 25; 
	i %= 7;
	// printf("Mod Compound:i=25,i%=7 Result %i\n",i);
	printf("25%%7 i=%i\n",i);	

	return 0;
}



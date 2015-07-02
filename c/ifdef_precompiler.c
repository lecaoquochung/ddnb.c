#include <stdio.h>

int main() 
{
	#ifdef AAA
		printf("Hello you pre-compile with AAA\n");
	#endif

	#ifdef BBB
		printf("You pre-complie with BBB\n");
	#else
		printf("You don't input sth. like BBB when compile. Right?\n");
	#endif

	#ifndef CCC
		printf("Input CCC when compile to stop me output this line\n");
	#endif
}
	

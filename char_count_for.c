#include <stdio.h>

/* 	
	Cuenta los caracteres de entrada
	EOF= End of file 
	nc = numbers of characters
*/


main()
{
	long nc;

	for (nc = 0; getchar() != EOF; nc++);

	printf("%ld\n", nc);
}
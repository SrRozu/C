#include <stdio.h>

/* 	
	Cuenta los caracteres de entrada
	EOF= End of file 
	nc = numbers of characters
*/

main()
{
	long nc

	nc = 0;

	while (getchar() != EOF)
		nc ++;

	printf("%ld\n", nc);

}

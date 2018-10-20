#include <stdio.h>

main ()
{
	int caracter, numero_lineas;

	numero_lineas = 0;

	while ( (caracter = getchar()) != EOF)
		if (caracter == '\n')
			numero_lineas++;

	printf("%d", numero_lineas);
}
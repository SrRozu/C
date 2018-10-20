#include<stdio.h>
/* 	
	Copia un archivo caracter a caracter

	Lee un caracter
	while (caracter no sea final de archivo)
		manda a salida el caracter recien leido 
		lee un caracter
*/

main()
{
	int c;
	c = getchar();
	while (c != EOF){
		putchar(c);
		c = getchar();
	}
}

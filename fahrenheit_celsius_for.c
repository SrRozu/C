#include<stdio.h>
/* 	Imprimir una tabla de equivalencia entre fahrenheit y celsius
	La tabla va de 20 en 20, desde 0 hasta 200 */

main()
{
	float fahrenheit;
	


	printf("fahrenheit       celsius\n");
	for (fahrenheit = 0; fahrenheit <= 300; fahrenheit += 20){
		printf("%3.0f\t\t%6.1f\n", fahrenheit, fahrenheit / 5 * 9 + 32);
	}
}
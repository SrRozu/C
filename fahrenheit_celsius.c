#include<stdio.h>
/* 	Imprimir una tabla de equivalencia entre fahrenheit y celsius
	La tabla va de 20 en 20, desde 0 hasta 200 */

main()
{
	float fahrenheit, celsius;
	float lower, upper, tep;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;
	printf("celsius       fahrenheit\n");
	while (celsius <= upper){
		fahrenheit = celsius / 5 * 9 + 32;
		printf("%3.0f\t\t%6.1f\n", celsius, fahrenheit);
		celsius = celsius + step;
	}
}












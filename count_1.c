#include <stdio.h>

main()
{
	int caracter, count_enter, count_tab, count_empty;

	count_empty = 0;
	count_tab = 0;
	count_enter = 0;

	while ((caracter = getchar()) != EOF){
		if (caracter == '\n')
			count_enter++;
		if (caracter == '\t')
			count_tab++;
		if (caracter == ' ')
			count_empty++;
	}
	printf("%d, %d, %d\n", count_enter, count_tab, count_empty);
}
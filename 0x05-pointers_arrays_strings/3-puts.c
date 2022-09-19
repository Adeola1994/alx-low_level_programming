#include <stdio.h>
#include "main.h"

/**
 * _puts - a function that prints a spring, followed by a new line, to stdout
 * @str: the string of characters to be printed
 * Retirn: returns nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0, 1 ; i++)
	{
		if (*(str + 1) == 0)
		{
			printf("\n");
			break;
		}
		printf("c%", *(str + 1));
	}
}

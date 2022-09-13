#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	int round = 1;
	char ch;

	for (round = 1; round <= 10; round++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}

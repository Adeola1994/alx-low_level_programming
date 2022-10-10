#include <stdio.h>

/**
 * main - a program that prints the name of the file it was compiled from
 * Return: returns 0 (success)
 */
int main(void)
{
	printf("%s\n", --FILE--);

	return (0);
}

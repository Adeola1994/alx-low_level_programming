#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - a program that performs simple arithmetic 
 * operations by calling helper functions
 * @argc: the number of command-line arguments
 * @argv: array of strings containing cmd-line arguments
 * Return: returns 0 (success)
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (strlen(argv[2]) == 1 && (argv[2][0] == '+' || argv[2][0] == '-'
			|| argv[2][0] == '*' || argv[2][0] == '/' || argv[2][0] == '%'))
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);

		ptr = get_op_func(argv[2]);
		result = ptr(num1, num2);

		printf("%d\n", result);

		return (0);
	}
	printf("Error\n");
	exit(99);
}

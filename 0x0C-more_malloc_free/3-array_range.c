#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array of an integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array
 * if man > mix, returns NULL.
 * If malloc fails, returns NULL
 */
int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(*ar) * ((max - min) + 1));

	if (ar == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ar[] = min;

	return (ar);
}

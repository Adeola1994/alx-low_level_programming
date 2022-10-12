#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - a function that executes a function 
 * given as a parameter on each element of an array
 * @array: the array should be operated on
 * @size: the size of the array
 * @action: the action should performed on each array element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

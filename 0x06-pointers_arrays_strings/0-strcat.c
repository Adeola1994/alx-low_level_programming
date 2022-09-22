#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * Return: destination
 */

char *_strcat(char *dest, char *src)
{
	int ch, ch2;

	ch = 0;

	while(dest[ch])
		ch++;
	for(ch2 = 0; src[ch2]; ch++)
		dest[ch++] = src[ch2];
	return (dest);
}

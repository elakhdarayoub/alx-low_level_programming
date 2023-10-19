#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: The distination array.
 * @src: The source array.
 * @n: Numbers of chars to take from src.
 *
 * Description: Concat the content of n chars from array src to array dest.
 * Return: The array dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int nullCharLocation, i;

	nullCharLocation = 0;

	/* Finding The null byte location in dest */
	while (dest[nullCharLocation] != '\0')
		nullCharLocation++;

	/* Concatinating process*/
	for (i = 0; i < n; i++)
		dest[nullCharLocation + i] = src[i];

	return (dest);
}

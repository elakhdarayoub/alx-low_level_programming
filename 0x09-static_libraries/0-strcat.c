#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The distination array.
 * @src: The source array.
 *
 * Description: Concatinating the content of array src to array dest.
 * Return: The array dest.
 */
char *_strcat(char *dest, char *src)
{
	int nullCharLocation, srcLen, i;

	nullCharLocation = srcLen = 0;

	/* Finding The null byte location in dest */
	while (dest[nullCharLocation] != '\0')
		nullCharLocation++;

	/* Calculating the length of src */
	while (src[srcLen] != '\0')
		srcLen++;

	/* Concatinating process*/
	for (i = 0; i <= srcLen; i++)
		dest[nullCharLocation + i] = src[i];

	return (dest);
}

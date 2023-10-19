#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: Copy to.
 * @src: Copy from.
 * @n: Number of chars to copy.
 *
 * Description: A function that copies n chars from src to dest.
 * Return: dest array.
 */
char *_strncpy(char *dest, char *src, int n)
{
	short int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

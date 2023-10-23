#include "main.h"

/**
 * _memcpy - Copy memory area.
 * @dest: Destination.
 * @src: src.
 * @n: number of bytes.
 *
 * Description: Copy a memory area till n of bytes.
 * Return: dest array.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *j;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		j = dest;
		*(j + i) = src[i];
	}
	return (dest);
}

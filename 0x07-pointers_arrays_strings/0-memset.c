#include "main.h"

/**
 * _memset - Fills memory with constant byte.
 * @s: The pointer to memo area.
 * @b: The constant byte.
 * @n: The number of memory blocks to be filled.
 *
 * Description: Fills the memory area passed with the constant byte passed.
 * Return: Pointer to the memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string.
 * @accept: The second string.
 *
 * Description: Gets the length of a prefix substring.
 * Return: number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[j]; j++)
		{
			if (accept[j] == '\0')
				return (j);
		}
	}

	return (j);
}

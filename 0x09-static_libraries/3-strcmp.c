#include "main.h"

/**
 * _strcmp - Compare two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Description: Comparing two input strings.
 * Return: Integer.
 */
int _strcmp(char *s1, char *s2)
{
	int len;

	len = 0;
	while (*s1)
	{
		if (*s1 != *s2)
		{
			len = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (len);
}

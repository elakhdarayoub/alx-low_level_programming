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
	int len, i;

	for (len = 0; s1[len] != '\0'; len++)
		;

	for (i = 0; i < len; i++)
	{
		if (s1[i] > s2[i])
			return (15);
		else if (s1[i] < s2[i])
			return (-15);
	}
	return (0);
}

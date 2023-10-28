#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string.
 * @c: The char to look for.
 *
 * Descripion: Locates a character position.
 * Return: The pointer of the first accurence of c.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}

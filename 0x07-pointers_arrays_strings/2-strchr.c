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
	char *p;

	p = s;
	while (*p != '\0')
	{
		if (*p == c)
			return (p);
		p++;
	}
	return ('\0');
}

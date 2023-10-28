#include "main.h"

/**
 * _strlen - Counts the length of a string.
 * @s: The string.
 *
 * Description: Counting the length of a string.
 * Return: The string lenght.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

#include "main.h"

/**
 * isLower - determines whether ascii is lower
 * @c: char.
 * Return: 1 if true, 0 if false.
 */
int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - determines whether ascii is a delimiter.
 * @c: char.
 * Return: 1 if true, 0 otherwise.
 */
int isDelimiter(char c)
{
	int i;
	char delimiter[] = "\t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * *cap_string - Capitalize a string.
 * @s: The string to process.
 *
 * Description: Capitalizes all words inside string.
 * Return: string.
 */
char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foudDelimit = 1;
		else if (isLower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}

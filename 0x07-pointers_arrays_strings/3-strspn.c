#include "main.h"

/**
 * string_type - Detects dynamically the type of bytes in string
 * @str: The string.
 * @range: The array containing accept range.
 *
 * Description: Checks the first element of str and assume that the whole
 * string bytes are in the same char class.
 * Return: void.
 */
void string_type(char *str, int *range)
{
	/* For digits */
	if (*str >= 48 && *str <= 57)
	{
		range[0] = 48;
		range[1] = 57;
	}
	else if (*str >= 65 && *str <= 90)
	{ /* For upper*/
		range[0] = 65;
		range[1] = 90;
	}
	else if (*str >= 97 && *str <= 122)
	{/* For lower */
		range[0] = 97;
		range[1] = 122;
	}
}

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
	unsigned int n;
	int range[2];

	string_type(accept, range);

	for (n = 0; (s[n] >= range[0] && s[n] <= range[1]); n++)
		;

	return (n);
}

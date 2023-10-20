#include "main.h"

/**
 * *cap_string - Capitalize a string.
 * @str: The string to process.
 *
 * Description: Capitalizes all words inside string.
 * Return: string.
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 32)
			str[i + 1] -= 32;
		else if (i == 0)
			str[i] -= 32;
	}
	return (str);
}

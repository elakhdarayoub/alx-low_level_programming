#incude "main.h"

/**
 * string_toupper - convert string to uppercase.
 * @str: The array.
 *
 * Description: Converts a string to uppercase.
 * Return: char array.
 */
char *string_toupper(char *)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;

	for (j = 0; j < i; j++)
	{
		if (str[j] >= 98 && str[j] <= 122)
			str[j] -= 32;
	}
	return (str)
}

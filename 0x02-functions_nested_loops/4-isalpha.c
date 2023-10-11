#include "main.h"

/**
 * _isalpha - Does as name implies.
 * @c: The character to check.
 *
 * Description: Checks wether a character is alphabet or not.
 * Return: 1 if alpha, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

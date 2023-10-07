#include <stdio.h>

/**
 * main - Program entry point.
 *
 * Description: prints alphabets in [a-z][A-Z].
 * Return: 0 at success.
 */
int main(void)
{
	char lower, upper;

	lower = 'a';
	upper = 'A';

	while (lower <= 'z' && upper <= 'Z')
	{
		putchar(lower);
		putchar(upper);
		putchar('\n');
		lower++;
		upper++;
	}
	return (0);
}

#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point.
 * @argc: Number of arguments.
 * @argv: Array of Args.
 *
 * Description : Program that perform multiplication to positiv numbers.
 * Return:  at success.
 */
int main(int argc, char **argv)
{
	int result, i;

	result = 0;
	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(argv[i]) && atoi(argv[i]) > 0)
				result += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", result);
	}
	return (0);
}

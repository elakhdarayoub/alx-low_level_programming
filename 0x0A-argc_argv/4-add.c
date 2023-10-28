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
	int result = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return(printf("Error\n"), 1);
		result += atoi(argv[argc]);
	}
	printf("%d\n", result);
	return (0);
}

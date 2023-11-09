#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings passed to it.
 * @separator: Chars used to separate strings.
 * @n: Number of arguments passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *string = va_arg(args, char *); 
		printf("%s", string ? string : "(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}

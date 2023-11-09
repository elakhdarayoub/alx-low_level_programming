#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Sum up all its arguments.
 * @n: Number of arguments.
 *
 * Return: The total of all arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list args;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}

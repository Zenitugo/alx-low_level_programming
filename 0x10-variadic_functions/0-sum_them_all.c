#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: Total amounts of arguments
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int p;
	int sum = 0;

	if ( n == 0)
		return (0);

	va_start(valist, n);

	for (p = 0; p < n; p++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}

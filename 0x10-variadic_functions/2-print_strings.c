#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int a;
	char *s;

	va_start(valist, n);

	for (a = 0; a < n; a++)
	{
		s = va_arg(valist, char *);

		if (s)
			printf("%s", s);
		else
			printf("(nil0)");
		
		if (a < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf ("\n");
	va_end(valist);
}

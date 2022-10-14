#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	va_list	va_arg;
	unsigned int i = 0;
	unsigned int f;
	unsigned int c = 0;
	char *s;
	const char t_arg[] = ("cifs");

	va_start(valist, format);
	while (format && format[i])
	{
		f = 0;
		while (t_arg[f])
		{
			if (format[i] == t_arg[f] && c)
			{
				printf(", ");
				break;
			} f++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), c = 1;
		case 's':
			s = va_arg(valist, char *), c = 1;
			if (!s)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		} i++;
	}
	printf("\n");
	va_end(valist);
}

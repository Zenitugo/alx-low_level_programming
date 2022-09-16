#include "main.h"

/**
 * print_most_numbers - print digit character
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int h;

	for (h = 48; h < 58; h++)
	{
		if (h != 50)
		{
			if (h != 52)
			{
				_putchar(h);
			}
		}
	}
	_putchar('\n');
}

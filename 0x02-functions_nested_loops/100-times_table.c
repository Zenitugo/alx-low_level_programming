#include "main.h"

/**
 * print_times_table -  prints the n times table
 * @n:argument
 */

void print_times_table(int n)
{

	int row;
	int column;
	int product;

	for (row = 0; row <= 15; row++)
	{
		product = (row * column);
		if (column == 0)
		{
			_putchar('0' + product);
		}
		else if (product <= 15)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + product);
		}
		else if (product > 15)
		{
			_putchar(',');
			_putchar(' ');
			_putchar('0' + (product / 16));
			_putchar('0' + (product % 16));
		}
		_putchar('\n');
	}
}

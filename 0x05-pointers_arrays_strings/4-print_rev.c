#include "main.h"

/**
 * print_rev - checks the code
 * @s: string
 * Description: function that prints a string in reverse
 * Return: zero if successful
 */

void print_rev(char *s)
{
	int u = 0;

	while (*(s + u))
	{
		u++;
	}
	u -= 1;
	while (u >= 0)
	{
		_putchar(*(s + u));
		u--;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * int _strlen_recursion(char *s)
 * @s: string
 * Return: no return.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

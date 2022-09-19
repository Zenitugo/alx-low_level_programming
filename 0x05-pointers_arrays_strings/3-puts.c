#include "main.h"

/**
 * _puts - checks the code
 * @str: represnt the string
 *
 * Description:  function that prints a string
 * Return: zero if successful
 */

void _puts(char *str)
{
	int p = 0;

	while (*(str + p))
	{
		_putchar(*(str + p));
		p++;
	}
	_putchar('\n')
}

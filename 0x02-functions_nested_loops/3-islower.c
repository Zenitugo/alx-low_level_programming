#include "main.h"

/**
 * _islower- entry point
 * @c: character to check
 *
 * Description: Function that checks for lowercase
 * Return: zero if successful
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
		else
	{
		return (0);
	}
	_putchar('\n');
}

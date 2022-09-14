#include "main.h"
/**
 * print_last_digit - entry point
 * @n: parameter member n
 * Description: function that prints the last digit of a number
 * Return: zero if successful
 */

int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	if (x < 0)
		x = -x;
	_putchar(x + '0');
	return (x);
}

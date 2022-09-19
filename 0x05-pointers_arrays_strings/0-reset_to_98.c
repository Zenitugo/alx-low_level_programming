#include "main.h"

/**
 * reset_to_98 - function that takes a pointer to an int as parameter
 * and updates the value it points to to 98.
 * @n: a pointer that stores addresses
 * Return: zero if successful
 */

void reset_to_98(int *n)
{
	int *n;

	*n = 98;
		_putchar("value of *n variable: %d\n", *n);
		return (0);
}

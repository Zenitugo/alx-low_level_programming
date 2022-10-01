#include "main.h"

/**
 * _abs - entry point
 * @n: integer argument
 * Description: compute absolute value of integer
 * Return: absolute value
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);

	return (0);
}

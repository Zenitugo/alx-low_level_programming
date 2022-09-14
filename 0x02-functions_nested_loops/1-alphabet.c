#include "main.h"

/**
 * print_alphabet - check the code
 * takes no argument
 *
 * Description: print_alphabet - prints lowercase alphabet
 * Return: zero if successful
 */

void print_alphabet(void)
{
	char j;

	j = 97;

	while (j <= 122)
	{
	_putchar(j);
	j++;
	}
	_putchar(10);
}

#include "main.h"

/**
 * main - check the code
 * print_alphabet - prints lowercase alphabet
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

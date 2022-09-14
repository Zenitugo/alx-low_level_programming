#include "main.h"

/**
 * main - check the code
 * takes no argument
 *
 * Description: print alphabets in
 * lower case
 * Return: zero if successful
 */
void print_alphabet(void)
{
	char ch;

	ch = 97;

	while (ch <= 122)
	{
		_putchar(ch);
		ch++;
	}
	_putchar(10);
	return (0);
}


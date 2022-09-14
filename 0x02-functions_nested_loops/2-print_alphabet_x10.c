#include "main.h"

/**
 * void print_alphabet_x10(void) - entry point
 * takes no argument
 *
 * Description: print the lower case alphabets ten times
 * Return: zero if successful
 */

void print_alphabet_x10(void)
{
	char h;
	int x;




	for (x = 1; x <= 10; x++)
	{
		for (h = 'a'; h <= 'z'; h++)
		{
		_putchar(h);

		}
		_putchar('\n');
	}
}

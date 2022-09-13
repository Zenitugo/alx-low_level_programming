#include <stdio.h>

/**
 * main - entry point
 * takes no argument
 *
 * Description: print alphabets in reverse order
 * Return: zero if successful
 */
int main(void)
{
	char a;

	for (a = 'z' ; a >= 'a' ; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

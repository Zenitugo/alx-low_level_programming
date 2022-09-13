#include <stdio.h>

/**
 * main - entry point
 * takes no argument
 *
 * Description: print single digit number using char
 * Return: zero if successful
 */
int main(void)
{
	int n;

	for (n = '0' ; n <= '9' ; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

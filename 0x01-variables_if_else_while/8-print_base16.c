#include <stdio.h>

/**
 * main - entry poin
 * takes no argument
 *
 * Description: Print number of base 16 in lower case
 * Return: zero if successful
 */
int main(void)
{
	char n;

	for (n = '0' ; n <= '9' ; n++)
	{
		putchar(n);
	}
	for (n = 'a' ; n <= 'f' ; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

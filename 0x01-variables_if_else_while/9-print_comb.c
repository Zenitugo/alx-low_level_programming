#include <stdio.h>

/**
 * main - entry point
 *  takes no argument
 *
 * Description: Print possible combinations of
 * single digits numbers
 * Return: zero if sucessful
 */
int main(void)
{
	int c;

	for (c = '0' ; c <= '9' ; c++)
	{
		putchar(c);
		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - entry point
 * takes no argument
 *
 * Desciption: print letters without q and e
 * Returns: zero if successful
 */
int main(void)
{
	char ch;

	for (ch = 97 ; ch <= 122 ; ch++)
	{
		if (ch != 101 && ch != 113)
		{
			putchar(ch);
		}
	}
	putchar(10);
	return (0);
}

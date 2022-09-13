#include <stdio.h>

/**
 * main - entry point
 * takes no argument
 *
 * Desciption: Print A to Z and leave out q and E
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

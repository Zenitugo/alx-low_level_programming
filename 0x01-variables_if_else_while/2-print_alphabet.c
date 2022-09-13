#include <stdio.h>

/**
 * main - entry point
 * takes no argument
 *
 * Description: print alphabet in lowercase
 * Return: zero if successful
 */
int main(void)
{
	int ch;

        For (ch = 97; ch <= 122; ch ++)
		putchar(ch);

	putchar (10);
	return (0);
}

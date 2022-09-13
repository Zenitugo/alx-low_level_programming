#include <stdio.h>

/**
 * main - entry point
 * takes no argument
 *
 * Description: Print single digit numbers of base ten
 * Return: zero if successful
 */
int main(void)
{
	int d;

	for (d = 0 ; d < 10 ; d++)
	{
		printf("%d", d);
	}
	printf("\n");
	return (0);
}

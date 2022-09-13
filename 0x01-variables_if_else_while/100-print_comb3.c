#include <stdio.h>

/**
 * main - entry point
 * takes no argument
 *
 * Description: print all possible combinations of two digits
 * Return: zero if successful
 */
int main(void)
{ 
	int i, j;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 1 ; j <= 9 ; j++)
		{
			if (j > i)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i != 8)
				{
					putchar(',');
					putchar(' ');
				}

			}
		}
	}
	putchar('\n');
	return (0);
}

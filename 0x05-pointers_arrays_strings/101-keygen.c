#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * argument is password
 *
 * Description: program that generates random valid passwords
 * Return: zero if successful
 */
int main(void)
{
	int pass[100];
	int x, sum, y;

	sum = 0;
	srand(time(NULL));

	for (x = 0; x < 100; x++)
	{
		pass[x] = rand() % 55;
		sum += (pass[x] + '0');
		putchar(pass[x] + '0');
		if ((2772 - sum) - '0' < 55)
		{
			y = 2772 - sum - '0';
			sum += y;
			putchar(y + '0');
			break;
		}
	}
	return (0);
}

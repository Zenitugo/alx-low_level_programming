#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * takes no argument
 *
 * Description: generate random number and
 * check if it is greater than five, equal
 * zero or less than 6
 * Return: zero if successful
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (x > 5)
		printf("Last digit of %d is %d and is greater that 5\n", n, x);

	else if (x == 0)
		printf("Last digit of %d is %d && is zero\n", n, x);

	else
		printf("Last digit of %d is %d && is less than 6 && not zero\n", n, x);
	return (0);
}

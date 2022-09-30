#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * main - prints the minimum number of coins for an amount of money
 * @argc: should count two arguments
 * @argv: arguments given should be program name and amount of money
 * Return: least number of coins, 0 if negative amount, 1 if amount not given
 */

int main(int argc, char *argv[])
{
	int k, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}

	k = atoi(argv[1]);

	coins += k / 25;
	k = k % 25;
	coins += k / 10;
	k = k % 10;
	coins += k / 5;
	k = k % 5;
	coins += k / 2;
	k = k % 2;
	coins += k / 1;

	printf("%d\n", coins);
	return (0);
}

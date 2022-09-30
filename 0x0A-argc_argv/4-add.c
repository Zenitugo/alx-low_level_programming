#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_num - iterate through each argv to test if it's a number
 * @argvv: a argv
 * Return: true only if entire string is a number, false if not
 */

bool is_num(char *argvv)
{
	int m = 0;

	for (m = 0; argvv[m]; m++)
	{
		if (!(argvv[m] >= '0' && argvv[m] <= '9'))
			return (0);
	}
	return (1);
}

/**
 * main - print sum if all arguments given are numbers
 * @argc: argument counter
 * @argv: arguments
 * Return: 0 on success, 1 if an argument wasn't a number
 */

int main(int argc, char *argv[])
{
	int n = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (n < argc)
	{
		if (is_num(argv[n]))
			sum += atoi(argv[n]);
		else
		{
			printf("Error\n");
			return (1);
		}
		n++;
	}
	printf("%d\n", sum);

	return (0);
}


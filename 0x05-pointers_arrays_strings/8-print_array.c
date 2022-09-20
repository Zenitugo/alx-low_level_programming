#include <stdio.h>

/**
 * print_array - entry point
 * @a: array
 * @n: number of elements
 *
 * Description:  function that prints n elements of an array of integers
 */

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		if (c != (n - 1))
			printf("%d, ", a[c]);
		else
			printf("%d", a[c]);
	}
	printf("\n");
}

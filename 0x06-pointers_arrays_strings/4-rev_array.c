#include "main.h"

/**
 * reverse_array -  function that reverses the content
 * of an array of integers
 * @n: number of element in an array
 * @a: a pointer to the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, tmp;
	int ln = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[ln];
		a[ln] = tmp;
		ln--;
	}
}

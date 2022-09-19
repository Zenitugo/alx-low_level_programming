#include "main.h"

/**
 * swap_int - check the code
 * @a: value of first integer
 * @b: value of second integer
 *
 * Description: function that swaps the values of two integers
 * Return: nothing because we are swapping not computing
 */

void swap_int(int *a, int *b)
{
	int w;

	w = *a;
	*a = *b;
	*b = w;
}

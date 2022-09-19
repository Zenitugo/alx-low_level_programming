#include "main.h"

/**
 * rev_string - checks the code
 * @s: string
 *
 * Description: function that reverses a string
 * Return: length of string
 */

void rev_string(char *s)
{
	int m, n;
	int b = 0;
	char revString[1000];

	for (m = 0; 1 ; m++)
	{
		if (s[m] == 0)
			break;
		b++;
	}
	m = 0;
	for (n = b - 1; n >= 0; n--)
	{
		revString[m] = s[n];
		m++;
	}
	for (m = 0; 1 ; m++)
	{
		if (revString[m] == 0)
			break;
		s[m] = revString[m];
	}
}

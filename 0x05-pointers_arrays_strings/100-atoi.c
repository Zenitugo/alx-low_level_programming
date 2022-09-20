#include "main.h"

/**
 * _atoi - checks code
 * @s: string to be converted
 *
 * Description: function that convert a string to an integer
 * Return: the integer converted from the string
 */

int _atoi(char *s)
{
	int m = 0;
	int n = 0;
	int o = 0;
	int len = 0;
	int p = 0;
	int digit = 0;

	while (s[len] != '\0')
		len++;

	while (m < len && p == 0)
	{
		if (s[m] == '-')
			++n;

		if (s[m] >= '0' && s[m] <= '9')
		{
			digit = s[m] - '0';
			if (n % 2)
				digit = -digit;
			o = o * 10 + digit;
			p = 1;
			if (s[m + 1] < '0' || s[m + 1] > '9')
				break;
			p = 0;
		}
		m++;
	}
	if (p == 0)
		return (0);
}

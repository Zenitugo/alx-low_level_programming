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
	int x = 0;
	int y = (_strlen(s) - 1);
	char c;

	while (x < y)
	{
		c = s[x];
		s[x] = s[y];
		s[y] = c;
		x++, y++;
	}
}

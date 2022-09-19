#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of a string
 */

int _strlen(char *s)
{
	int t = 0;

	while (*s != '\0')
	{
		t++;
		s++;
	}
}

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

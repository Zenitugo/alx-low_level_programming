#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: string to be compared
 * @s2: string to be compared with
 * Return: returns -15 if s1 < s2, 15 if s1 > s2
 * and returns 0 if they're equal
 */

int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] == s2[x]; x++)
	{
		if (s1[x] == 0)
			return (0);
	}
	return (s1[x] - s2[x]);
}

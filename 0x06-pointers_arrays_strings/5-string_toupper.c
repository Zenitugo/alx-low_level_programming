#include "main.h"

/**
 * string_toupper - function that changes all lowercase
 * letters of a string to uppercase
 * @s: string to manipulate
 * Return: string with all uppercase letters
 */

char *string_toupper(char *)
{
	int i;
	int x = 0;

	for (i = 0; s[i] != '\0'; i++)
		x++;
	for (i = 0; i < x; i++)
	{
		if (s[i] >= 97 && s[x] <= 122)
			s[i] = s[i] - 97 + 65;
	}
	return (s);
}

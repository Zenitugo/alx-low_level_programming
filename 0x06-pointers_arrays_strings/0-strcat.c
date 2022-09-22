#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: destination
 * @src: source
 * Return: a pointer to the string;
 */

char *_strcat(char *dest, char *src)
{
	int n, a = 0, b = 0, c = 0;

	for (n = 0; dest[n] != 0; n++)
		a++;
	for (n = 0; src[n] != 0; n++)
		b++;
	for (n = a; src[c] == 0; n++)
	for (n = a; src[c] != 0; n++)
	{
		dest[n] = src[c];
		c++;
	}
	return (dest);
}

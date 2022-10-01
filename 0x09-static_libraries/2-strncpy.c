#include "main.h"

/**
 * _strncpy - function that copies a string
 * @src: source string
 * @dest: destination string
 * @n: bytes from src
 * Return: pointer to dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int y;

	for (y = 0; src[y] != 0 && y < n; y++)
	{
		dest[y] = src[y];
	}
	for ( ; y < n; y++)
	{
		dest[y] = '\0';
	}
	return (dest);
}

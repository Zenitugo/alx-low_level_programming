#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @src: source string
 * @dest: destination string
 * Return: pointer to dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];
	for ( ; x < n; x++)
		dest[x] = '\0';

	return (dest);
}

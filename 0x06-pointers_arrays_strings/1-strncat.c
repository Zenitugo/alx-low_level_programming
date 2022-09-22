#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src
 * Return: pointer to destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = y = 0;
	while (*(dest + x))
		x++;
	while (y < n && *(src + y))
	{
		*(dest + x) = *(src + y);
		x++;
		y++;
	}
	if (y < n)
		*(dest + x) = *(src + y);

	return (dest);
}

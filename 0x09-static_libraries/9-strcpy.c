#include "main.h"

/**
 * _strlen - entry point
 * @s: string
 *
 * Description: returns the length of a string
 * Return: length
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}

/**
 * _strcpy - checks the code
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: move source to this buffer
 * @src: this is the source
 * Return: copy of original source
 */

char *_strcpy(char *dest, char *src)
{
	int z;

	for (z = 0; z <= _strlen(src); z++)
		dest[z] = src[z];

	return (dest);
}

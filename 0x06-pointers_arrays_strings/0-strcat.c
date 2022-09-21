#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: destination
 * @src: source
 * Return: zero if successful
 */

char *_strcat(char *dest, char *src)
{
	char *dest [7] = {"Preety"};
	char *src [5] = {"girl"};

	_putchar("concatenated string : %s\n", strcat(dest, src));
	return (0);
}

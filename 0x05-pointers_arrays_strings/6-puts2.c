#include "main.h"

/**
 * _strlen - checks the code
 *@s: string
 *
 * Description: returns the length of a string
 * Return: length of string
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
 * puts2 - checks the code
 * @str: string
 *
 * Description: function that prints every other character of a string
 * Return: length of a string
 */

void puts2(char *str)
{
	int w;

	for (w = 0; str[w] != '\0' && w < _strlen(str); w += 2)
		_putchar(str[w]);

	_putchar('\n');
}

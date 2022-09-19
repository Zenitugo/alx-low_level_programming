#include "main.h"

/**
 * _strlen - checks the code
 * @s: string
 *
 * Description: function that prints half of a string
 * Return: length
 */

int _strlen(char *s)
{
	l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}

	return (l);
}

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 */

void puts_half(char *str)
{
	int i;
	int len = _strlen(str);

	/* find the index to start depending on even/odd amount of strlen*/
	if (len % 2 != 0)
		i = (len / 2) + 1;
	else
		i = (len / 2);

	while (i < len)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}

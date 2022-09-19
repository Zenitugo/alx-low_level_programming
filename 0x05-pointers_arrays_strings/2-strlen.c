#include "main.h"

/**
 * _strlen - check the code
 * @s: length of a string
 *
 * Description: function that returns the length of a string
 * Return: length of string
 */

int _strlen(char *s)
{
	int y = 0;

	while (*(s + y))
		y++;
		return (y);
}

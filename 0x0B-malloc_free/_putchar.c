#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: one if successful
 * On error, return -1 and erno is set appropriately.
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}

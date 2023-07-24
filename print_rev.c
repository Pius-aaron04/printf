#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be reversed
 * Return: length of string
 */

int print_rev(char *s)
{
	int length = _strlen(s), i;

	i = length - 1;
	/* prints from behind */
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	return (length);
}

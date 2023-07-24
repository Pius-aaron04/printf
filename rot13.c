#include "main.h"

/**
 * rot13 - prints encrypted character in a string
 * @c: a character
 * Return: it returns an integer
 */

int rot13(char *c)
{
	int len = _strlen(c);
	char *s = c;
	char base;

	while (*s)
	{
		if (_isalpha(*s))
		{
			base = _islower(*s) ? 'a' : 'A';
			_putchar((*s - base + 13) % 26 + base);
		}
		else
			_putchar(*s);
		s++;
	}
	return (len);
}

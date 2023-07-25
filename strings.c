#include "main.h"
/**
 *_islower - check the code for lowercase letter
 *
 *@c: the charater is in the ASCII code
 *
 *Return: 1 for lowercase character, 0 for uppercase character
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

/**
 *_isalpha - check the code for alphabetic character
 *
 *@c: the charater is in the ASCII code
 *
 *Return: 1 for lowercase character or uppercase character, 0 for otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

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

/**
 * _strcpy - copies a string to another string
 * @dest: destination of copied string
 * @src: string to be copied
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *p_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (p_dest);
}

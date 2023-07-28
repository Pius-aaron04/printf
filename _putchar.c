#include <unistd.h>
#include "main.h"

/**
 * ascii - prints ascii value of unprintable characters in hex
 * @s: string
 * Return: number of integers printed
 */

int ascii(char *s)
{
	int len = 0;

	if (!s)
		return (_puts("(nil)"));
	while (*s)
	{
		if (*s < 32 || *s >= 127)
			len += (_puts("\\x") + hex(*s, 'X'));
		else
			len += _putchar(*s);
		s++;
	}
	return (len);
}
/**
 * _putchar - writes character c to stdout
 * Return: 1 on success.
 * @c: character to print
 *
 * -1 on error. error is set approximately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - prints a string
 * @str: string
 * Return: number of character printed
 */

int _puts(char *str)
{
	int l = 0;

	if (str == NULL)
		str = "(null)";
	if (*str == '\0')
		return (0);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		l++;

	}
	return (l);
}

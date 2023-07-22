#include "main.h"

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
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		l++;

	}
	return (l);
}

#include "main.h"

/**
 * _puts - prints a string
 * @str: string
 */

void _puts(char *str)
{
	if (str != NULL)
		while (*str != '\0')
		{
			_putchar(*str);
			str++;

		}
}

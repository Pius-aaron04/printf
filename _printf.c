#include "main.h"

/**
 * print_string - prints strings only
 * @string: string parameter
 * @len: length of string
 * Return : length of string
 */
int print_string(char *string, int len)
{
	_puts(string);
	return (*&len += _strlen(string));
}

/**
 * _printf - prints format string
 * @format: format string
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int len = 0;
	va_list format_args;

	va_start(format_args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					_putchar(va_arg(format_args, int));
					len++;
					break;
				case 's':
					len += print_string(va_arg(format_args, char *), len);
					break;
				case '%':
					_putchar(*format);
					len++;
					break;
				default:
					_putchar(*format);
					len++;
					break;
			}
		}
		else
		{
			_putchar(*format);
			len++;
		}
		format++;
	}
	va_end(format_args);
	return (0);
}

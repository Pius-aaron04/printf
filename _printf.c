#include "main.h"

/**
 * print_string - prints strings only
 * @string: string parameter
 * Return : nothing
 */
void print_string(char *string)
{
	_puts(string);
}

/**
 * _printf - prints format string
 * @format: format string
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
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
					break;
				case 's':
					print_string(va_arg(format_args, char *));
					break;
				default:
					_putchar(*format);
					break;
			}
		}
		else
		{
			_putchar(*format);
		}
		format++;
	}
	va_end(format_args);
	return (0);
}

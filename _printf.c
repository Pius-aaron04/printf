#include "main.h"

/**
 * switch_format - switches format
 * @c: character
 * @format_args: obviously
 * Return: int
 */

int switch_format(char c, va_list format_args)
{
	switch (c)
	{
		case 'c':
			return (_putchar(va_arg(format_args, int)));
		case 's':
			return (_puts(va_arg(format_args, char *)));
		case '%':
			return (_putchar(c));
		case '\0':
			return (0);
		case ' ':
			return (0);
		case 'i':
			return (print_integer(va_arg(format_args, int)));
		case 'd':
			return (print_integer(va_arg(format_args, int)));
		default:
			return (_putchar(c));
	}
}
/**
 * _printf - prints format string
 * @format: format string
 * Return: number of characters printed or -1 if there is an error
 */

int _printf(const char *format, ...)
{
	int len = 0, result;
	va_list format_args;

	va_start(format_args, format);
	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			result = switch_format(*format, format_args);
			if (result == 0)
				return (-1);
			len += result;
		}
		else
			len += _putchar(*format);
		format++;
	}
	va_end(format_args);
	return (len);
}

#include "main.h"

/**
 * _printf - prints format string
 * @format: format string
 * Return: number of characters printed or -1 if there is an error
 */

int _printf(const char *format, ...)
{
	int len = 0;
	va_list format_args;

	va_start(format_args, format);
	if (format == NULL)
		return (-1);
	while (*format)
	{
		/* looks for format specifier and call appropriate function*/
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					len += _putchar(va_arg(format_args, int));
					break;
				case 's':
					len += _puts(va_arg(format_args, char *));
					break;
				case '%':
					len += _putchar(*format);
					break;
				case '\0':
					return (-1);
				case ' ':
					return (-1);
				default:
					len += _putchar(*format);
					break;
			}
		}
		else
		{
			len += _putchar(*format);
		}
		format++;
	}
	va_end(format_args);
	return (len);
}

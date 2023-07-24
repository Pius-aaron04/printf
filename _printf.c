#include "main.h"

/**
 * switch_format - switches format
 * @c: character
 * @len: length of string
 */

void switch_format(char *c, int len)
{
	if (*c == '%')
	{
		c++;
		switch (*c)
		{
			case 'c':
				*len += _putchar(va_arg(format_args, int));
				break;
			case 's':
				*len += _puts(va_arg(format_args, char *));
				break;
			case '%':
				*len += _putchar(*c);
				break;
			case '\0':
				return (-1);
			case ' ':
				return (-1);
			case 'i':
				*len += print_integer(va_arg(format_args, int));
				break;
			case 'd':
				*len += print_integer(va_arg(format_args, int));
				break;
			default:
				*len += _putchar(*c);
				break;
		}
	}
	else
	{
		*len += _putchar(*c);
	}
}
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
					case 'i':
						len += print_integer(va_arg(format_args, int));
						break;
					case 'd':
						len += print_integer(va_arg(format_args, int));
						break;
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

#include "main.h"

/**
 * print_integer - prints integers
 * @num: number
 * Return: lenght of integer
 */

int print_integer(int num)
{
	int len = 0;

	if (num == (INT_MIN))
		return (_puts("-2147483648"));
	if (num < 0)
	{
		len += _putchar('-');
		num = -num;
	}

	if (num >= 10)
	{
		len += (print_integer(num / 10));
	}
	_putchar(num % 10 + '0');
	len++;
	return (len);
}

/**
 * base_o_b - prints intger in base 2 or base 8
 * @base: base 2 or base 8
 * @num: num to be printed
 * Return: digits printed
 */

int base_o_b(int num, int base)
{
	int len = 0;

	if (num == 0)
	{
		return (0);
	}

	len = base_o_b(num / base, base);
	_putchar('0' + (num % base));

	/* recursively calculate length */
	return (len + 1);
}

/**
 * hex - converts decimal to hex
 * @num: num to convert
 * @x: capilization
 * Return: length of digits printed
 */
int hex(int num, char x)
{
	int len = 0, remainder;

	if (num == 0)
	{
		return (0);
	}

	len = hex(num / 16, x);
	remainder = num % 16;
	/* determines which alphabet */
	if (remainder >= 10)
	{
		if (x == 'x')
			_putchar('a' + remainder - 10);
		else if (x == 'X')
			_putchar('A' + remainder - 10);
	}
	else
		_putchar('0' + (num % 16));

	/* recursively calculate length */
	return (len + 1);
}

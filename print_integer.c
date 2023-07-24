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

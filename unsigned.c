#include "main.h"

/**
 * print_unsigned - prints integers
 * @num: number
 * Return: lenght of integer
 */

int print_unsigned(int num)
{
	int len = 0;

	if (num < 0)
		num = -num;
	if (num >= 10)
	{
		len += print_unsigned(num / 10);
	}
	_putchar(num % 10 + '0');
	len++;
	return (len);
}

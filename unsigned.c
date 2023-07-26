#include "main.h"

/**
 * print_u - prints integers
 * @num: number
 * Return: lenght of integer
 */

int print_u(unsigned int num)
{
	int len = 0;

	if (num >= 10)
	{
		len += print_u(num / 10);
	}
	_putchar(num % 10 + '0');
	len++;
	return (len);
}

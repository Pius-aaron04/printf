#include "main.h"
/**
 *_islower - check the code for lowercase letter
 *
 *@c: the charater is in the ASCII code
 *
 *Return: 1 for lowercase character, 0 for uppercase character
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

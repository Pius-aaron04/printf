#include "main.h"
/**
 *_isalpha - check the code for alphabetic character
 *
 *@c: the charater is in the ASCII code
 *
 *Return: 1 for lowercase character or uppercase character, 0 for otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

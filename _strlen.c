#include "main.h"
/**
 * _strlen - prints the number of characters of a string
 * @s: string
 * Return: length of s
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

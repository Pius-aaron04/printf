#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * Return: 1 on success.
 * @c: character to print
 *
 * -1 on error. errno is set approximately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

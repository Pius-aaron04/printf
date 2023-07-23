#include "main.h"
#include <stdio.h>
#include <limits.h>
int main(void)
{
	int x = 10, len, len2;

	len = _printf("%i + %i = %d\n", x, INT_MAX, x + INT_MAX);
	len2 = printf("%i + %i = %d\n", x, INT_MAX, x + INT_MAX);
	_printf("%d\n", len2);
	return (len);
}

#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

/*The are function prototypes pertaining to strings*/
int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *c);
int _strlen(char *s);
int print_rev(char *s);
int _islower(int c);
int _isalpha(int c);
int rot13(char *c);

int base_o_b(unsigned long int num, int base);
int hex(unsigned long int num, char x);
int print_integer(int num);
int print_unsigned(unsigned int num);
int print_addr(void *ptr);
#endif

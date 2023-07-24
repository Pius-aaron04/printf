#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *c);
int _strlen(char *s);
int base_o_b(int num, int base);
int hex(int num, char x);
int print_integer(int num);
int print_unsigned(int num);
int print_rev(char *s);
#endif

#include <stdarg.h>
#include <stddef.h>
#ifndef MAIN_H
#define MAIN_H

/**
 * header file 
 * arg lib included for var functions
 *
 */

int _printf(const char *format, ...);
int _putchar(char c);
int print_int(va_list ap);
int print_unsigned(unsigned int n);
int print_binary(unsigned int n);
int print_unsigned_base(unsigned int n, int base, int uppercase);
#endif 

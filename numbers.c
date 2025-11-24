#include "main.h"

/**
 * print_unsigned - prints an unsigned integer
 * 
 * Return: number of characters printed
 */

int print_unsigned(unsigned int n)
{
  int count = 0;

  if (n / 10)
     count += print_unsigned(n / 10);

   _putchar((n % 10) + '0');
    count++;

  return (count);
}

/**
 * print_int - prints a signed integer
 *
 * Return: number of characters printed
 */

int print_int(va_list ap)
{
  int n = va_arg(ap, int);
  unsigned int num;
  int count = 0;

  if (n < 0)
    {
      _putchar('-');
      count++;
      num = -n;
    }
  else
    {
      num = n;
    }

  count += print_unsigned(num);

  return (count);
}

/**
 * print_unsigned_base - prints an unsigned integer in a specified base
 * @n: the unsigned integer to print
 * @base: the base to print the number in (e.g., 2 for binary, 8 for octal, 10 for decimal, 16 for hexadecimal)
 * @uppercase: flag to indicate if hexadecimal letters should be uppercase
 */

 int print_unsigned_base(unsigned int n, int base, int uppercase)

{
    char digits[] = "0123456789abcdef";
    char DIGITS[] = "0123456789ABCDEF";
    char buffer[32]; /* enough for 32-bit unsigned int */
    int i = 0, count = 0;

	/*Gurad clause: invalid base do nothing*/
	if (base < 2 || base > 16)
		return 0;
	/*special case for 0*/
    if (n == 0)
    {
        _putchar('0');
        return 1;
    }

    /* convert number to string in reverse order */
    while (n > 0)
    {
        int digit = n % base;
        buffer[i++] = uppercase ? DIGITS[digit] : digits[digit];
        n /= base;
    }

    /* print in correct order */
    while (i > 0)
    {
        _putchar(buffer[--i]);
        count++;
    }

    return count;
}

/**
 * print_binary - prints the binary representation of an unsigned integer
 * @n: the unsigned integer to print in binary
 *
 * Return: number of characters printed
 */	

int print_binary(unsigned int n)
{
    int count = 0;

    if (n > 1)  /* keep dividing until we reach the last bit */
        count += print_binary(n / 2);

    _putchar((n % 2) + '0');  /* print remainder (0 or 1) */
    count++;

    return count;
}

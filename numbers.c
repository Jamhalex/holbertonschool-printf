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

#include "main.h"

/**
 * _printf - prints text with simple format codes
 * @format: the message to print
 *
 * Return: number of characters printed, or -1 on error
 */


int _printf(const char *format, ...)
{
	va_list ap;
	int i, j;
	int count = 0;
	char *str;
	char ch;
	
	/**
	 * If format is NULL
	 * returns the value -1 to indicate an error has occurred.	
	 */
	
	if (format == NULL)
	return(-1);
	
	va_start(ap, format);

	/**
	 * loop - parsing through the format string
	 * statements - format handle instructions for %
	 * 1. if nothing after % - invalid
	 * 2. if % c - prints 1 character
	 * 3. if % s - prints a string
	 * 4. if % % - prints %
	 * 5. if & d,i - prints unsigned,signed int
	 * 6. if anything else after % - prints all
	 */

	
	for (i = 0; format[i] != '\0'; i++)
	{
	       
		if (format[i] == '%')
		{
			i++;
			
			if (format[i] == '\0')
			{
				va_end(ap);
				return (-1);
			}

			
			if (format[i] == 'c')
			{
				ch = (char)va_arg(ap, int);
				_putchar(ch);
				count++;
			}

			else if (format[i] == 's')
			{
				str = va_arg(ap, char *);
				
				if (str == NULL)
				   str = "(null)";
				
				for (j = 0; str[j] != '\0'; j++)
				{
					_putchar(str[j]);
					count++;
				}
			}

			else if (format[i] == 'd' || format[i] == 'i')
			  {
			    count += print_int(ap);
			  }

			else if (format[i] == '%')
			{
				_putchar('%');
				count++;
			}


			else 
			{
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
		}
		

		else
		{
			_putchar(format[i]);
			count++;
		}
	}

	va_end(ap);
	return (count);
}

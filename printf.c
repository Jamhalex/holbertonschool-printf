#include "main.h"

/**
 * prinft - Output displayer with fomrat specifiers feature
 * return - Number of characters
 *
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int i, j;
	int count = 0;
	char *str;
	char ch;

	if (format == NULL)
	return(-1);
	
	va_start(ap, format);

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
				
				for (j = 0; str[j] ! = '\0'; j++)
				{
					_putchar(str[j]);
					count++;
				}
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

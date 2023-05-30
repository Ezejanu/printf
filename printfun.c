#include <unistd.h>
#include "main.h"
#include <stdarg.h>
/**
* _printf - a function to perform the same functions as printf
* @format: a character string composed of zero or more directives.
* Return: value of count
*/
int _printf(const char *format, ...)
{
	unsigned int a, count = 0;
	va_list toprint;

	va_start(toprint, format);
	if (format == NULL)
		return (0);
	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] != '%')
			_putchar(format[a]);
		else
		{
			a++;

			if(format[a] == 'c')
			{
				fun_c(toprint);
			}
			else if (format[a] == 's')
			{
				fun_s(toprint);
			}
			else if (format[a] == '%')
			{
				_putchar('%');
			}
			else if (format[a] == 'd' || format[a] == 'i')
			{
				fun_id(toprint);
			}
			else
			{
				_putchar('%');
				_putchar(format[a]);
			}
		}
		count++;
	}
	va_end(toprint);
	return (count);
}

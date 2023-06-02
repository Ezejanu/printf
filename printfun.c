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
			while (format[a] == '+' || format[a] == ' ' || format[a] == '#') 
			{
                		_putchar(format[a]);
                		a++;
            		}

			if (format[a] == 'c')
				fun_c(toprint);
			else if (format[a] == '\0')
				return (-1);
			else if (format[a] == 's')
				fun_s(toprint);
			else if (format[a] == '%')
				_putchar('%');
			else if (format[a] == 'b')
				fun_b(toprint);
			else if (format[a] == 'u')
				fun_u(toprint);
			else if (format[a] == 'o')
				fun_o(toprint);
			else if(format[a] == 'x')
				fun_x(toprint);
			else if(format[a] == 'X')
				fun_X(toprint);
			else if(format[a] == 'p')
                                fun_p(toprint);
			else if(format[a] == 'S')
                                fun_S(toprint);
			else if (format[a] == 'd' || format[a] == 'i')
			{
				a--;
				count += getint(va_arg(toprint, int));
				a++;
				count--;
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

#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
* _printf - a function to perform the same functions as printf
* @format: a character string composed of zero or more directives.
* Return: Always (0)
*/

int _printf(const char *format, ...)
{
	unsigned int a, count = 0;

	va_list toprint;

	va_start(toprint, format);

	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] != '%')
			_putchar(format[a]);

		else if (format[a + 1] == 'c')
		{
			_putchar(va_arg(toprint, int));
			 a++;
		}
		else if (format[a + 1] == 's')
		{
			_puts(va_arg(toprint, char *));
			count += 1;
			a++;
		}
		else if (format[a + 1] == '%')
		{
			_putchar('%');
		}
		count++;
	}
	return (count);
}



/**
* main - to test our work
* Return: Always (0)
*/

int main(void)
{
	char p = 'l';
	char *b = "Ezejanu";

	int count1 = printf("1%%Ugochi%cnyere%s\n", p, b);
	int count2 = _printf("1%%Ugochi%cnyere%s\n", p, b);

	printf("Return value:%d\n", count1);
	printf("Return value:%d\n", count2);
	return (0);
}

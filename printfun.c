#include "main.h"
#include <stdio.h>
#include <stdarg.h>


int _printf(const char *format, ...)
{
	int a;

	va_list toprint;

	va_start(toprint, format);
	

	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] != '%')
			putchar(format[a]);

		else if (format[a + 1] == 'c')
		{
			putchar(va_arg(toprint, int));
			 a++;
		}
		else if (format[a + 1] == 's')
		{
			puts(va_arg(toprint, char *));
			a++;
		}
		else if (format[a+1] == '%')
			putchar('%');

	}
	

	return(0);
}


























int main(void)
{
	char p = 'l';
	char *b = "Ezejanu";

	_printf("1%%Ugochi%cnyere%s\n", p, b);
	printf("1%%Ugochi%cnyere%s\n", p, b);
	return (0);
}

/**
int add(int a, int b)
{
	int sum = a + b;
	return (sum);
}


int main(void)
{

	int a = add(2, 3);
	printf("%d", a);
	return (0);
}

*/

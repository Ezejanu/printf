#include "main.h"
#include <stdio.h>
#include <stdarg.h>


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
		else if (format[a+1] == '%')
		{
			_putchar('%');
		}
		count++;
	}
	

	return(count);
}








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

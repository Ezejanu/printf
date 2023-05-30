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
	char *str;
	char e;

	va_start(toprint, format);
	if (format == NULL)
		return (0);
	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] != '%')
			_putchar(format[a]);
		else if (format[a + 1] == 'c')
		{
			e = va_arg(toprint, int);
			if (!e)
			return (0);
			_putchar(e);
			 a++;
		}
		else if (format[a + 1] == 's')
		{
			str = va_arg(toprint, char *);
			if (!str)
			return (0);
			count += _puts(str);
			a++;
		}
		else if (format[a + 1] == '%')
		{
			_putchar('%');
			a++;
		}
		else if (format[a + 1] == 'd' || format[a + 1] == 'i')
		{
			count += getint(va_arg(toprint, int));
			count--;
			a++;
		}
		else
		{
			_putchar('%');
			_putchar(format[a + 1]);
			a++;
		}
		count++;
	}
	va_end(toprint);
	return (count);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* _puts - writes to the std output
* @s: string to be printed
* Return: value of count
*/

int _puts(char *s)
{
	int a, count = 0;

	if (s != NULL)
		for (a = 0; s[a] != '\0'; a++)
		{
			_putchar(s[a]);
			count++;
		}
	return (count);
}



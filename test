#include <unistd.h>
#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdbool.h>

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
        return (-1);

    for (a = 0; format[a] != '\0'; a++)
    {
        if (format[a] != '%')
        {
            _putchar(format[a]);
            count++;
        }
        else
        {
            a++;  // Move past '%'

            // Handle null pointer for %s
            if (format[a] == 's')
            {
                char *str = va_arg(toprint, char *);
                if (str == NULL)
                    str = "(null)";
                count += _puts(str);
            }
            // Handle %c
            else if (format[a] == 'c')
            {
                _putchar(va_arg(toprint, int));
                count++;
            }
            // Handle %% (literal '%')
            else if (format[a] == '%')
            {
                _putchar('%');
                count++;
            }
            // Handle %d and %i
            else if (format[a] == 'd' || format[a] == 'i')
            {
                count += getint(va_arg(toprint, int));
            }
            // Handle unsupported format specifier
            else
            {
                _putchar('%');
                _putchar(format[a]);
                count += 2;
            }
        }
    }

    va_end(toprint);
    return count;
}

int _putchar(char c)
{
        return (write(1, &c, 1));
}

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

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
        {
            count += _putchar(format[a]);
        }
        else
        {
            a++;
            while (format[a] == '+' || format[a] == ' ' || format[a] == '#')
            {
                count += _putchar(format[a]);
                a++;
            }

            if (format[a] == 'c')
            {
                count += fun_c(toprint);
            }
            else if (format[a] == '\0')
            {
                va_end(toprint);
                return (-1);
            }
            else if (format[a] == 's')
            {
                count += fun_s(toprint);
            }
            else if (format[a] == '%')
            {
                count += _putchar('%');
            }
            else if (format[a] == 'b')
            {
                count += fun_b(toprint);
            }
            else if (format[a] == 'u')
            {
                count += fun_u(toprint);
            }
            else if (format[a] == 'o')
            {
                count += fun_o(toprint);
            }
            else if (format[a] == 'x')
            {
                count += fun_x(toprint);
            }
            else if (format[a] == 'X')
            {
                count += fun_X(toprint);
            }
            else if (format[a] == 'p')
            {
                count += fun_p(toprint);
            }
            else if (format[a] == 'S')
            {
                count += fun_S(toprint);
            }
            else if (format[a] == 'd' || format[a] == 'i')
            {
                count += fun_id(toprint);
            }
            else
            {
                count += _putchar('%');
                count += _putchar(format[a]);
            }
        }
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
    static char buffer[1024];
    static int bufferCount = 0;
    int count = 0;

    buffer[bufferCount++] = c;

    if (bufferCount > 0)
    {
        write(1, buffer, bufferCount);
        count += bufferCount;
        bufferCount = 0;
    }

    return count;
}


/**
 * _puts - writes to the std output
 * @s: string to be printed
 * Return: Number of characters printed
 */
int _puts(char *s)
{
    int a, count = 0;

    if (s != NULL)
    {
        for (a = 0; s[a] != '\0'; a++)
        {
            count += _putchar(s[a]);
        }
    }
    return count;
}


/**
 * fun_c - prints a character
 * @toprint: list of arguments
 * Return: Number of characters printed
 */
int fun_c(va_list toprint)
{
    char ch;

    ch = va_arg(toprint, int);
    if (!ch)
    {
        _putchar('\0');
        return 1;
    }
    return _putchar(ch);
}

/**
 * fun_s - prints a string
 * @toprint: list of arguments
 * Return: Number of characters printed
 */
int fun_s(va_list toprint)
{
    char *string;
    int count = 0;

    string = va_arg(toprint, char *);
    if (!string)
    {
        _puts("(null)");
        return 6; /* Return the count for "(null)"*/
    }

    count = _puts(string);
    return count;
}

/**
 * fun_b - prints a number in binary
 * @toprint: list of arguments
 * Return: Number of characters printed
 */
int fun_b(va_list toprint)
{
    unsigned int binary;
    int count = 0;

    binary = va_arg(toprint, unsigned int);
    if (binary == 0)
        return (_putchar('0'));

    if (binary / 2)
        count += fun_b(toprint);

    count += _putchar((binary % 2) + '0');
    return count;
}

/**
 * fun_u - prints an unsigned int
 * @toprint: list of arguments
 * Return: Number of characters printed
 */
int fun_u(va_list toprint)
{
    unsigned int num;
    int count = 0;

    num = va_arg(toprint, unsigned int);
    if (num / 10)
        count += fun_u(toprint);

    count += _putchar((num % 10) + '0');
    return count;
}

/**
 * fun_o - prints a number in octal
 * @toprint: list of arguments
 * Return: Number of characters printed
 */
int fun_o(va_list toprint)
{
    unsigned int octal;
    int count = 0;

    octal = va_arg(toprint, unsigned int);
    if (octal == 0)
        return (_putchar('0'));

    if (octal / 8)
        count += fun_o(toprint);

    count += _putchar((octal % 8) + '0');
    return count;
}

/**
 * fun_x - prints a number in lowercase hexadecimal
 * @toprint: list of arguments
 * Return: Number of characters printed
 */
int fun_x(va_list toprint)
{
    unsigned int hex;
    int count = 0;

    hex = va_arg(toprint, unsigned int);
    if (hex == 0)
        return (_putchar('0'));

    if (hex / 16)
        count += fun_x(toprint);

    if ((hex % 16) < 10)
        count += _putchar((hex % 16) + '0');
    else
        count += _putchar((hex % 16) - 10 + 'a');

    return count;
}

/**
 * fun_X - prints a number in uppercase hexadecimal
 * @toprint: list of arguments
 * Return: Number of characters printed
 */
int fun_X(va_list toprint)
{
    unsigned int hex;
    int count = 0;

    hex = va_arg(toprint, unsigned int);
    if (hex == 0)
        return (_putchar('0'));

    if (hex / 16)
        count += fun_X(toprint);

    if ((hex % 16) < 10)
        count += _putchar((hex % 16) + '0');
    else
        count += _putchar((hex % 16) - 10 + 'A');

    return count;
}

/**
 * fun_p - prints an address
 * @toprint: list of arguments
 * Return: Number of characters printed
 */
int fun_p(va_list toprint)
{
    unsigned long int address;
    int count = 0;

    count += _puts("0x");
    address = va_arg(toprint, unsigned long int);
    if (address / 16)
        count += fun_x(toprint);

    if ((address % 16) < 10)
        count += _putchar((address % 16) + '0');
    else
        count += _putchar((address % 16) - 10 + 'a');

    return count;
}

/**
 * fun_S - prints a string and non-printable characters
 * @toprint: list of arguments
 * Return: Number of characters printed
 */
int fun_S(va_list toprint)
{
    char *string, *hex;
    unsigned int a;
    int count = 0;

    string = va_arg(toprint, char *);
    if (!string)
    {
        _puts("(null)");
        return 6; /* Return the count for "(null)"*/
    }

    for (a = 0; string[a]; a++)
    {
        if ((string[a] > 0 && string[a] < 32) || string[a] >= 127)
        {
            count += _putchar('\\');
            count += _putchar('x');
            hex = convert(string[a], 16, 0);
            if (!hex[1])
                count += _putchar('0');
            count += _puts(hex);
        }
        else
            count += _putchar(string[a]);
    }
    return count;
}

/**
 * fun_id - prints a number
 * @toprint: list of arguments
 * Return: Number of characters printed
 */
int fun_id(va_list toprint)
{
    int num, count = 0;

    num = va_arg(toprint, int);
    if (num < 0)
    {
        count += _putchar('-');
        num = -num;
    }

    if (num / 10)
        count += fun_id(toprint);

    count += _putchar((num % 10) + '0');
    return count;
}

/**
 * convert - converts a number to the specified base
 * @num: number to convert
 * @base: base to convert to
 * @lowcase: flag to determine whether to use lowercase letters (1) or uppercase letters (0)
 * Return: Pointer to the converted string
 */
char *convert(unsigned int num, int base, int lowcase)
{
    static char *rep;
    static char buffer[50];
    char *ptr;

    rep = lowcase ? "0123456789abcdef" : "0123456789ABCDEF";
    ptr = &buffer[49];
    *ptr = '\0';

    do
    {
        *--ptr = rep[num % base];
        num /= base;
    } while (num != 0);

    return (ptr);
}


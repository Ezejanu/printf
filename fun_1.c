#include "main.h"

/**
* fun_s - a funtion to print string
* @toprint: list
*/

void fun_s(va_list toprint)
{
	char *string;

	string = va_arg(toprint, char*);
	if (!string)
		_puts("(null)");
	else
	_puts(string);
}

/**
* fun_c -  a funtion to print char
* @toprint: list
*/

void fun_c(va_list toprint)
{
	char ch;

	ch = va_arg(toprint, int);
	if (!ch)
		_putchar('\0');
	_putchar(ch);
}

/**
* fun_id - a funtion to print string
* @toprint: list
 */

void fun_id(va_list toprint)
{
	int id;

	id = va_arg(toprint, int);

		getint(id);
}

/**
* fun_b - a function that converts an unsigned int argument to binary
* @toprint: list
*/

void fun_b(va_list toprint)
{
	unsigned int ab;
	int fun[100];
	int a = 0;

	ab = va_arg(toprint, int);
	if (ab == 0)
		_putchar('0');
	else
	{
		while (ab > 0)
		{
			fun[a] = ab % 2;
			ab = ab / 2;
			a++;
		}
		for (; a > 0; a--)
			_putchar(fun[a - 1] + '0');
	}
}

/**
* fun_S - a function that handle a custom specifier S
* Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way:
* \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
* @toprint: list
*/

void fun_S(va_list toprint)
{
    char *string;
    int i, ascii;

    string = va_arg(toprint, char*);
    if (!string)
        exit(1);

    for (i = 0; string[i] != '\0'; i++)
    {
        ascii = (int) string[i];
        if (ascii > 0 && (ascii < 32 || ascii >= 127))
        {
            _putchar('\\');
            _putchar('x');
            if (ascii < 16)
            {
                _putchar('0');
            }
	    else
            _putchar((ascii / 16) < 10 ? (ascii / 16) + '0' : (ascii / 16) - 10 + 'A');
            _putchar((ascii % 16) < 10 ? (ascii % 16) + '0' : (ascii % 16) - 10 + 'A');

        }
        else
        {
            _putchar(string[i]);
        }
    }
}

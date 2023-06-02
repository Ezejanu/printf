#include "main.h"

/**
* fun_u - function that prints unsigned int
* @toprint: list
*/

void fun_u(va_list toprint)
{
	unsigned int un;

	un = va_arg(toprint, int);

	getunint(un);
}

/**
* fun_o - a function that converts an unsigned int argument to octadecimal
* @toprint: list
*/

void fun_o(va_list toprint)
{
	unsigned int oct;
	char bin[100];
	int a = 0;

	oct = va_arg(toprint, int);

	if (oct == 0)
	{
		_putchar('0');
	}
	else
	{
		while (oct > 0)
		{
			bin[a] = oct % 8;
			oct = oct / 8;
			a++;
		}
		for (; a - 1 >= 0; a--)
		/* "a - 1 >= 0" can also be written as "a > 0" in the for loop */
			_putchar(bin[a - 1] + '0');
	}
}

/**
* fun_x - a function that converts an unsigned int argument to hexadecimal
* @toprint: list
*/

void fun_X(va_list toprint)
{
	unsigned int ab;
	char bin[100];
	int a = 0;

	ab = va_arg(toprint, int);

	if (ab == 0)
		_putchar('0');
	else
	{
		while (ab > 0)
		{
			bin[a] = ab % 16;
			ab = ab / 16;
			a++;
		}
		for (; a > 0; a--)
		{
			if (bin[a - 1]  < 10)
				_putchar(bin[a - 1] + '0');
			else
				_putchar(((bin[a - 1]) - 10) + 'A');
		}
	}
}


/**
* fun_x - a function that converts an unsigned int argument to hexadecimal
* @toprint: list
*/

void fun_x(va_list toprint)
{
        unsigned int ab;
        char bin[100];
        int a = 0;

        ab = va_arg(toprint, int);

        if (ab == 0)
                _putchar('0');
	else
	{
        	while (ab > 0)
        	{
                	bin[a] = ab % 16;
                	ab = ab / 16;
                	a++;
        	}
        	for (; a > 0; a--)
        	{
                	if (bin[a - 1] < 10)
                        	_putchar(bin[a - 1] + '0');
                	else
                        	_putchar((bin[a - 1] - 10) + 'a');
        	}
	}
}












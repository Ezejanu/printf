#include "main.h"

/**
* fun_u - function that prints unsigned int
* @toprint: list
* Return: couny
*/

int fun_u(va_list toprint)
{
	int count = 0;
	unsigned int un;

	un = va_arg(toprint, int);

	count += getunint(un);
	return (count);
}

/**
* fun_o - a function that converts an unsigned int
* argument to octadecimal
* @toprint: list
* Return: count
*/

int fun_o(va_list toprint)
{
	unsigned int oct;
	char bin[100];
	int a = 0, count = 0;

	oct = va_arg(toprint, int);

	if (oct == 0)
	{
		count += _putchar('0');
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
			count += _putchar(bin[a - 1] + '0');
	}
	return (count);
}

/**
* fun_X - a function that converts an unsigned int
* argument to hexadecimal
* @toprint: list
* Return: count
*/

int fun_X(va_list toprint)
{
	unsigned int ab;
	char bin[100];
	int a = 0, count = 0;

	ab = va_arg(toprint, int);

	if (ab == 0)
		count += _putchar('0');
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
				count += _putchar(bin[a - 1] + '0');
			else
				count += _putchar(((bin[a - 1]) - 10) + 'A');
		}
	}
	return (count);
}


/**
* fun_x - a function that converts an unsigned int
* argument to hexadecimal
* @toprint: list
* Return: count
*/

int fun_x(va_list toprint)
{
	unsigned int ab;
	char bin[100];
	int a = 0, count = 0;

	ab = va_arg(toprint, int);

	if (ab == 0)
		count +=  _putchar('0');
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
				count += _putchar(bin[a - 1] + '0');
			else
				count += _putchar((bin[a - 1] - 10) + 'a');
		}
	}
	return (count);
}

/**
* fun_p - a function that prints the address
* @toprint: list
* Return: count
*/

int fun_p(va_list toprint)
{
	void *ab;
	unsigned long add;
	int a = 0, count = 0;
	char bin[100];


	ab = va_arg(toprint, void*);
	add = (unsigned long)ab;

	if (add == 0)
		count += _putchar('0');
	else
	{
		while (add > 0)
		{
			bin[a] = add % 16;
			add = add / 16;
			a++;
		}
		count += _puts("0x");

		for (; a > 0; a--)
		{
			if (bin[a - 1] < 10)
				count += _putchar(bin[a - 1] + '0');
			else
				count += _putchar((bin[a - 1] - 10) + 'a');
		}
	}
	return (count);
}

#include "main.h"
#include <stdio.h>

/**
* getint - a function to print an integer
* @numb: integer to be printed
* Return: value of count
*/

int getint(int numb)
{
	int count = 0;

	if (numb == 0)
	{
		_putchar('0');
		count++;

	}
	else
	{
		if (numb < 0)
		{
			_putchar('-');
			numb = -numb;
			count++;
		}
		if (numb / 10)
		{
			count += getint(numb / 10);

		}
		_putchar(numb % 10 + '0');
		count++;
	}
	return (count);
}

/**
* getunint - a function to print an integer
* @numb: positive integer to be printed
* Return: value of count
*/

int getunint(unsigned int numb)
{
	int count = 0;

	if (numb == 0)
	{
		_putchar('0');
		count++;
		return (0);
	}
	else
	{
		if (numb / 10)
		{
			count += getunint(numb / 10);
		}
		_putchar(numb % 10 + '0');
		count++;
	}
	return (0);
}

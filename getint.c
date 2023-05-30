#include "main.h"

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

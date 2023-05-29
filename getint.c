#include "main.h"

/**
* getint - a function to print an integer
* @numb: integer to be printed
*/

void  getint(long int numb)
{
	if (numb == 0)
		_putchar('0');

	else
	{
		if (numb < 0)
		{
			_putchar('-');
			numb = numb * -1;
		}
		if (numb / 10)
			getint(numb / 10);

		_putchar(numb % 10 + '0');
	}
}

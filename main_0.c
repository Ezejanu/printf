/**

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

 * main - Entry point
 *
 * Return: 0 on success, error code otherwise

int main(void)
{
	int len, len2;
	void *p = (void *)0x7fff5100b608;

	len = _printf("%p", p);
	_putchar('\n');
	len2 = printf("%p", p);
	 _putchar('\n');
	fflush(stdout);
	 _putchar('\n');
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}


#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 
int main(void)
{
	int len, len2;

	len = _printf("%d", INT_MIN);
	len2 = printf("%d", INT_MIN);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
*/

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;

	len = _printf("%u", -1024);
	len2 = printf("%u", -1024);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}

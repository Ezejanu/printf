#include "main.h"

/**
 */

void fun_s(va_list toprint)
{
	char *string;

	string = va_arg(toprint, char*);
	if (!string)
		exit(1);
	_puts(string);
}

/**
 */

void fun_c(va_list toprint)
{
	char ch;

	ch = va_arg(toprint, int);
	if (!ch)
		exit(1);
	_putchar(ch);
}

/**
 */

void fun_id(va_list toprint)
{
	int id;

	id = va_arg(toprint, int);

		getint(id);
}



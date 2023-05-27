#include "main.h"
#include <stdio.h>

/**
*/


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

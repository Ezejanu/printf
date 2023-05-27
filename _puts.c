#include "main.h"
#include <stdio.h>

/**
*/


int _puts(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		putchar(s[a]);
	return (0);
}

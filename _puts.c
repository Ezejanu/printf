#include "main.h"
#include <stdio.h>

/**
* _puts - writes to the std output
* @s: string to be printed
* Return: Always (0)
*/

int _puts(char *s)
{
	int a; /* count = 0;*/

	if (s != NULL)

		for (a = 0; s[a] != '\0'; a++)
		{
			_putchar(s[a]);
		/*	count++; */
		}
	return (0);
}

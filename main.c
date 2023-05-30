#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
   len =  _printf("Negative:[%d]\n", 78962534);
    len2 = printf("Negative:[%d]\n", 76298534);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    	printf('\0');
	printf("whoare?\n");
	printf("");
	printf("hello\n");
	_printf("");
	_printf('\0');
	printf('\0');
	_printf("%s", "");
	printf("%s", "");
	printf("myname\n");
    return (0);
}

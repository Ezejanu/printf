#include "main.h"

/**
* fun_b - a function that converts an unsigned int argument to binary
* @toprint: list
* Return: count
*/
int fun_b(va_list toprint)
{
	unsigned int ab;
	int fun[100];
	int count = 0, a = 0;

	ab = va_arg(toprint, int);
	if (ab == 0)
		count += _putchar('0');
	else
	{
		while (ab > 0)
		{
			fun[a] = ab % 2;
			ab = ab / 2;
			a++;
		}
		for (; a > 0; a--)
			count += _putchar(fun[a - 1] + '0');
	}
	return (count);
}
/**
* fun_S - a function that handle a custom specifier S
* Non printable characters (0 < ASCII value < 32 or >= 127)
* \x, followed by the ASCII code value in hexadecimal
* (upper case - always 2 characters)
* @toprint: list
* Return: count
*/
int fun_S(va_list toprint)
{
	char *string;
	int count = 0, i, ascii;

	string = va_arg(toprint, char*);
	if (!string)
		count += _puts("(null)");

	for (i = 0; string[i] != '\0'; i++)
	{
		ascii = (int) string[i];
		if (ascii > 0 && (ascii < 32 || ascii >= 127))
		{
			count += _putchar('\\');
			count += _putchar('x');
			if (ascii < 16)
			{
				count += _putchar('0');
			}
			else
			{
				count += _putchar((ascii / 16) < 10 ? (ascii / 16) + '0'
						: (ascii / 16) - 10 + 'A');
				count += _putchar((ascii % 16) < 10 ? (ascii % 16) + '0'
						: (ascii % 16) - 10 + 'A');
			}
		}
		else
		{
			count += _putchar(string[i]);
		}
	}
	return (count);
}

/**
* fun_id - a funtion to print string
* @toprint: list
* Return: count
 */
int fun_id(va_list toprint)
{
	int count = 0, id;

	id = va_arg(toprint, int);

		count += getint(id);
	return (count);
}

/**
 * fun_s - a funtion to print string
 * @toprint: list
 * Return: count
 */
int fun_s(va_list toprint)
{
	int count = 0;
	char *string;

	string = va_arg(toprint, char*);
	if (!string)
	count += _puts("(null)");
	else
	count += _puts(string);

	return (count);
}

/**
* fun_c -  a funtion to print char
* @toprint: list
* Return: count
*/
int fun_c(va_list toprint)
{
	int count = 0;
	char ch;

	ch = va_arg(toprint, int);
	if (!ch)
		count += _putchar('\0');
	count += _putchar(ch);

	return (count);
}

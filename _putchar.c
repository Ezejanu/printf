#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{

	static char buffer[1024];
	int bufferCount = 0;

	buffer[bufferCount++] = c;

	if (bufferCount > 0)
	{
	write(1, buffer, bufferCount);
	bufferCount = 0;
	}
	return (1);
}

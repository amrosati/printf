#include "main.h"

/**
 * _putchar - Writes the character to stdout
 * @c: The character
 *
 * Return: 1 on success
 */
int _putchar(char c)
{
	static char buff[BUFFSIZ];
	static int i;

	if (c == -1 || i >= BUFFSIZ)
	{
		write(1, &buff, i);
		i *= 0;
	}
	if (c != -1)
	{
		buff[i] = c;
		i++;
	}

	return (1);
}

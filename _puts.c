#include "main.h"

/**
 * _puts - Writes a string to stdout
 * @str: String to print
 *
 * Return: Number of characters printed
 */
int _puts(char *str)
{
	register int i;

	for (i = 0; *(str + i); i++)
		_putchar(*(str + i));

	return (i);
}

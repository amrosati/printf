#include "main.h"

/**
 * _putchar - Writes the character to stdout
 * @c: The character
 *
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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

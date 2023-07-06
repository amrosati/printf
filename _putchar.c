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

#include "main.h"

/**
 * print_number - Prints a number to stdout
 * @n: number to print
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int i;
	char c;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	else
		i = n;

	if (i / 10)
		print_number(i / 10);

	c = (i % 10) + '0';
	_putchar(c);
}

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
		write(1, "-", 1);
		i = -n;
	}
	else
		i = n;

	if (i / 10)
		print_number(i / 10);

	c = (i % 10) + '0';
	write(1, &c, 1);
}

/**
 * count_digits - Counts the digits in a number
 * @n: number to count
 *
 * Return: number of digits
 */
int count_digits(int n)
{
	unsigned int count = 0, i;

	if (n < 0)
		i = n * -1;
	else
		i = n;

	while (i != 0)
	{
		i /= 10;
		count++;
	}

	return (count);
}

#include "main.h"

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

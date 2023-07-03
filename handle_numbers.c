#include "main.h"

/**
 * print_int - Handles numbers printing to stdout
 * @arg: list of arguments that contains the number string
 *
 * Return: number of chars printed
 */
int print_int(va_list arg)
{
	int printed = 0;
	int n = (int) va_arg(arg, int);

	if (n <= 0)
		printed++;

	printed += count_digits(n);
	print_number(n);

	return (printed);
}

/**
 * print_unum - Writes unsigned integer values to stdout
 * @arg: Argument from argument list
 *
 * Return: Number of bytes printed
 */
int print_unum(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	char *val = convert(num, 10, 0);

	return (_puts(val));
}

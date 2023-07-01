#include "main.h"

/**
 * print_bin - Writes binary values to stdout
 * @arg: Argument from argument list
 *
 * Return: Number of bytes printed
 */
int print_bin(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	char *val = convert(num, 2, 0);

	return (_puts(val));
}

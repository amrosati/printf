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


/**
 * print_unum - Writes unsigned values to stdout
 * @arg: Argument from argument list
 *
 * Return: Number of bytes printed
 */
int print_unum(va_list arg)
{
	unsigned long int num = (unsigned long int) va_arg(arg, unsigned long int);
	int printed = count_digits((int) num);

	print_number((int) num);

	return (printed);
}

/**
 * print_oct - Writes octal values to stdout
 * @arg: Argument from argument list
 *
 * Return: Number of bytes printed
 */
int print_oct(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	char *val = convert(num, 8, 0);

	return (_puts(val));
}

/**
 * print_hex - Writes hexadecimal values to stdout
 * @arg: Argument from argument list
 *
 * Return: Number of bytes printed
 */
int print_hex(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	char *val = convert(num, 16, 1);
	int count = 0;

	count += _puts(val);

	return (count);
}

/**
 * print_HEX - Writes hexadecimal values to stdout (uppercase)
 * @arg: Argument from argument list
 *
 * Return: Number of bytes printed
 */
int print_HEX(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	char *val = convert(num, 16, 0);
	int count = 0;

	count += _puts(val);

	return (count);
}

#include "main.h"

/**
 * print_char - writes a char to stdout from the arguments list
 * @arg: list of arguments
 *
 * Return: always 1
 */
int print_char(va_list arg)
{
	char c = (char) va_arg(arg, int);

	return (write(1, &c, 1));
}

/**
 * print_str - writes a string to stdout
 * @arg: arguments list
 *
 * Return: number of characters prented
 */
int print_str(va_list arg)
{
	char *str = va_arg(arg, char *);
	int printed = 0;

	if (str == NULL)
		return (write(1, "(null)", 6));

	for (; *str; str++)
		printed += write(1, str, 1);

	return (printed);
}

/**
 * print_percent - prints the percent sign
 * @arg: unused arguments list
 *
 * Return: always 1
 */
int print_percent(va_list arg)
{
	UNUSED(arg);

	return (write(1, "%%", 1));
}

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

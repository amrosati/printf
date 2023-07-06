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

	return (_putchar(c));
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

	if (str == NULL)
		return (_puts("(null)"));


	return (_puts(str));
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

	return (_putchar('%'));
}

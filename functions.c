#include "main.h"

/**
 * print_char - writes a char to stdout from the arguments list
 * @args: list of arguments
 *
 * Return: always 1
 */
int print_char(va_list args)
{
	char c = (char) va_arg(args, int);

	return (write(1, &c, 1));
}

/**
 * print_str - writes a string to stdout
 * @args: arguments list
 *
 * Return: number of characters prented
 */
int print_str(va_list args)
{
	char *str = va_arg(args, char *);
	int printed = 0;

	if (str == NULL)
		return (write(1, "(null)", 6));

	for (; *str; str++)
	{
		write(1, str, 1);
		printed++;
	}

	return (printed);
}

/**
 * print_percent - prints the percent sign
 * @args: unused arguments list
 *
 * Return: always 1
 */
int print_percent(va_list args)
{
	UNUSED(args);

	return (write(1, "%%", 1));
}

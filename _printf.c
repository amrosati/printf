#include "main.h"

/**
 * _printf - writes formated string to standard output stream
 * @format: the formatted string
 *
 * Return: number of printed characters
 */
int _printf(const char *format, ...)
{
	int i, bytes = 0;

	va_list args;

	if (!format)
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			bytes++;
		}
		else
		{
			i++;
			if (format[i] != '\0')
				bytes += handle_format(format, args, &i);
			else
				return (-1);
		}
	}

	va_end(args);
	return (bytes);
}

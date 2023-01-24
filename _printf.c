#include "main.h"

/**
 * _printf - writes formated string to standard output stream
 * @format: the formatted string 
 *
 * Return: number of printed characters
 */
int _printf(const char * format, ...)
{
	int i, j, printed_chars = 0;

	va_list args;

	if (!format)
		return (-1);

	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		j = i;
		while (format[i] != '%')
		{
			i++;

			if (!format[i])
				printed_chars += write(1, &format[j], (i - j));
			if (format[i] == '%')
				printed_chars += write(1, &format[j], (i - j));
		}

		if (format[i++] == '%')
		{
			if (format[i])
				printed_chars += handle_fmt(format, args, &i);
		}
	}

	va_end(args);
	return (printed_chars);
}

#include "main.h"

/**
 * handle_format - handles printing formats specifieres
 * @format: formatted string
 * @args: arguments list
 * @ind: pointer to format index
 *
 * Return: number of bytes printed
 */
int handle_format(const char *format, va_list args, int *ind)
{
	int i, bytes = 0, two = 2;
	fmt_t types[] = {{'c', print_char},
		{'s', print_str}, {'i', print_int},
		{'d', print_int}, {'u', print_uint},
		{'b', print_bin}, {'o', print_oct},
		{'x', print_hex}, {'X', print_HEX},
		{'%', print_percent}, {'\0', NULL}
	};

	for (i = 0; types[i].fmt != '\0' && format[*ind] != '\0'; i++)
		if (format[*ind] == types[i].fmt)
		{
			bytes += types[i].handle(args);
			break;
		}

	if (types[i].fmt == '\0')
	{
		if (format[*ind] != '\0')
			while (two--)
				bytes += _putchar(format[(*ind - two)]);
		else
			return (bytes);
	}

	return (bytes);
}

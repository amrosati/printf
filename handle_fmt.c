#include "main.h"

/**
 * handle_fmt - handles printing formats specifieres
 * @format: formatted string
 * @args: arguments list
 * @ind: pointer to format index
 *
 * Return: number of bytes printed
 */
int handle_fmt(const char *format, va_list args, int *ind)
{
	int i;
	fmt_t types[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_percent},
		{'\0', NULL}
	};

	for (i = 0; types[i].fmt && format[*ind]; i++)
		if (format[*ind] == types[i].fmt)
			return (types[i].func(args));

	if (types[i].fmt == '\0')
	{
		return (write(1, &format[*ind - 1], 2));
	}

	return (0);
}

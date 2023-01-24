#include "main.h"

/**
 * handle_fmt - handles printing formats specifieres
 * @fmt: formatted string
 * @list: arguments list
 * @ind: pointer to fmt index
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

	if (!types[i].fmt)
	{
		--(*ind);
		write(1, &format[*ind], 2);
		++*ind;
		return (2);
	}

	return (0);
}

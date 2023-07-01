#include "main.h"
/** Credit: https://github.com/kofra-jg/printf **/

/**
 * convert - Converts a number to the base and into string
 * @num: Number to convert
 * @base: Base to convert to
 * @islower: Flag if hex values is lowercase
 *
 * Return: String representation of the value
 */
char *convert(unsigned long int num, int base, int islower)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = (islower)
		? "0123456789abcdef"
		: "0123456789ABCDEF";

	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}

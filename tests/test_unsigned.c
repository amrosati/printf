#include "../main.h"
#include <stdio.h>

/**
 * main - test number handling spicifier
 *
 * Return: 0 (on success)
 */
int main(void)
{
	int len, len2;

	len = _printf("se %u to %u seco\n", 34, -43);
	len2 = printf("se %u to %u seco\n", 34, -43);

	fflush(stdout);

	if (len != len2)
	{
		printf("\n[%d] \t [%d]\nLengths diffir\n", len, len2);
		fflush(stdout);
		return (1);
	}

	return (0);
}

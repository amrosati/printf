#include "../main.h"

/**
 * main - Test code
 *
 * Return: 1 on success
 */
int main(void)
{
	int len1, len2;

	len1 = printf("%o\n", 34);
	len2 = _printf("%o\n", 34);

	fflush(stdout);

	if (len1 != len2)
	{
		printf("\n[%d] \t [%d]\nLengths diffir\n", len1, len2);
		fflush(stdout);
		return (1);
	}

	len1 = printf("%x\n", 34);
	len2 = _printf("%x\n", 34);

	fflush(stdout);

	if (len1 != len2)
	{
		printf("\n[%d] \t [%d]\nLengths diffir\n", len1, len2);
		fflush(stdout);
		return (2);
	}

	len1 = printf("%X\n", 34);
	len2 = _printf("%X\n", 34);

	fflush(stdout);

	if (len1 != len2)
	{
		printf("\n[%d] \t [%d]\nLengths diffir\n", len1, len2);
		fflush(stdout);
		return (3);
	}

	return (0);
}

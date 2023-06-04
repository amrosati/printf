#include "../main.h"
#include <stdio.h>

/**
 * main - test code
 *
 * Return: 0 (on success)
 */
int main(void)
{
	int len, len2;

	len = _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	len2 = printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');

	fflush(stdout);

	if (len != len2)
	{
		printf("Lengths differ\n");
		fflush(stdout);
		return (1);
	}

	return (0);
}

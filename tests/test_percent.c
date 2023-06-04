#include "../main.h"
#include <stdio.h>

int main(void)
{
	int len = -1, len2;

	len = _printf("%");
	len2 = printf("%");

	fflush(stdout);

	if (len != len2)
	{
		printf("Lenghs differ.\n", len, len2);
		fflush(stdout);
		return (1);
	}

	return (0);
}

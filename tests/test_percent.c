#include "../main.h"
#include <stdio.h>

int main(void)
{
	int len, len2;

	len = _printf("%");
	len2 = printf("%");

	fflush(stdout);

	if (len != len2)
	{
		_printf("[%d] [%d] Lenghs differ.\n", len, len2);
		fflush(stdout);
		return (1);
	}

	return (0);
}

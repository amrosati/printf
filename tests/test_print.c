#include "../main.h"
#include <stdio.h>

int main(void)
{
	int len, len2;

	len = _printf("%s", "This sentence is retrieved from va_args!\n");
	len2 = printf("%s", "This sentence is retrieved from va_args!\n");

	fflush(stdout);

	if (len != len2)
	{
		printf("Lenghs differ.\n");
		fflush(stdout);
		return (1);
	}

	return (0);
}

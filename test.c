#include "main.h"
#include <stdio.h>

int main(void)
{
	int n;

	n = _printf("Amro %s is %%100 %cay\n", "Satti", 'g');

	printf("%d\n", n);

	return (0);
}

#include "Header.h"

void task4(int *x, int n)
{
	printf("\nЗадание 4:\n");
	for (int *i = x; (i - x) < n; i++)
	{
		printf("x[%d] = %d\n", i - x, *i);
	}
}

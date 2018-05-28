#include "Header.h"

void task5(int *x, int n)
{
	printf("\nЗадание 5:\n");
	for (int *i = x; (i - x) < n; i++)
	{
		printf("x[%d] = ", i - x);
		scanf("%d", i);
	}
}

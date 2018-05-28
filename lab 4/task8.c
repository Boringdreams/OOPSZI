#include "Header.h"

void task8()
{
	int n = 10;
	printf("n = "); scanf("%d", &n);
	int *x = (int *)malloc(n * sizeof(int));
	task5(x, n);
	task4(x, n);
	task6(x, n);
	task4(x, n);
	free(x);
}

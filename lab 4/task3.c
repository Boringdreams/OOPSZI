#include "Header.h"

void task3()
{
	int *x = (int *)malloc(sizeof(int));
	printf("x = "); scanf("%d", x);
	printf("Адрес переменной: %p\nЗначение переменной: %d\n", x, *x);
	task1(x);
	printf("Адрес переменной: %p\nЗначение переменной: %d\n", x, *x);
	free(x);
}

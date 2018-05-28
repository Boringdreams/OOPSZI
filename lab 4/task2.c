#include "Header.h"

void task2()
{
	int x;
	printf("x = "); scanf("%d", &x);
	printf("Адрес переменной: %p\nЗначение переменной: %d\n", &x, x);
	task1(&x);
	printf("Адрес переменной: %p\nЗначение переменной: %d\n", &x, x);
}

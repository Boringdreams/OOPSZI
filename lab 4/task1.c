#include "Header.h"

void task1(int *x)
{
	printf("\n	Задание 1:\n	Адрес указателя: %p\n	Значение указателя: %p\n	Значение переменной по указателю: %d\n", &x, x, *x);
	++*x;
	printf("\n	Адрес указателя: %p\n	Значение указателя: %p\n	Значение переменной по указателю: %d\n\n", &x, x, *x);
}

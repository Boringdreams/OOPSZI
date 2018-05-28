#include "Header.h"

void task6(int *x, int n)
{
	_Bool endSort = 1;
	int obmen;
	printf("\nЗадание 6:\n");

	while (endSort)
	{
		endSort = 0;
		for (int *i = x; (i - x) < n - 1; i++)
		{
			if (*(i) > *(i + 1))
			{
				obmen = *(i);
				*(i) = *(i + 1);
				*(i + 1) = obmen;
				endSort = 1;
			}
		}
	}
}

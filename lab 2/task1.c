#include <stdio.h>
#include "stdafx.h"
#include <Windows.h>
#include <locale.h>
#include <math.h>
_Bool isInArea(double x, double y);
double f(double x);

int main()
{
	float x, y;
	setlocale(LC_ALL, "Russian");
	printf("Введите номер задания:");
	{
		printf("\nЗадание 1\n");
		printf("Введите x\nx=");
		scanf_s("%f", &x);
		printf("y=");
		scanf_s("%f", &y);
		if (isInArea(x, y)) {
			printf("Заданная точка попадает в выделенную область\n");
		}
		else {
			printf("Заданная точка не попадает в выделенную область\n");
		}
	return 0;
}

_Bool isInArea(double x, double y)
{
	if (x >= -1 && y <= 1 && (x - y) <= 0)

		return 1;

	else 
		return 0;
	
}

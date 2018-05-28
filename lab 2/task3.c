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
	switch (_getch())
	{
	case '1':
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
		break;
	case '2':
		printf("\nЗадание 2\n");
		printf("Введите x\nx=");
		scanf_s("%f", &x);
		printf("f(x)= %.0f\n", f(x));
		break;
	default:
		printf("\nНеверный номер\n");
		break;
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
double f(double x)
{
	if (x > 3) {
		return -3 * x + 9;
	}
	else {
		return pow(x, 3) / (pow(x, 2) + 8);
	}
}

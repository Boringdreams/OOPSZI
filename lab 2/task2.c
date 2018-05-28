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
		printf("\nЗадание 2\n");
		printf("Введите x\nx=");
		scanf_s("%f", &x);
		printf("f(x)= %.4f\n", f(x));
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

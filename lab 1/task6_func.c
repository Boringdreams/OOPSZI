#include <stdio.h> 
#include <math.h> 
double PI = 3.14;
float x, result;
void f()
{
	result = 2 * sin(PI*x - 2 * x)*sin(PI*x - 2 * x)*cos(PI * 5 + 5 * x)*cos(PI * 5 + 5 * x);

}

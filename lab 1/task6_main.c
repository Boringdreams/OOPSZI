#include <stdio.h> 
#include <math.h>
float x, result;
void f();
int main()
{
	x = 3;
	printf("x = %.0f\n", x);
	f();
	printf("f(x) = %.4f\n", result);

	printf("x = ");
	scanf_s("%f", &x);
	f();
	printf("f(x) = %.4f\n", result);

	return 0;
}

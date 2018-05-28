#include <math.h>

double summ2(double e)
{
	double z = pow(-1., 0) * 1 / (1 * 2 * 3);
	if (fabs(z) < e) return z;
	double sum = z;
	int i = 1;
	while ( fabs(z) > e)
	{
		z = pow(-1., i) * 1 / ((i + 1)*(i + 2)*(i + 3));
		sum += z;
		i++;
	}
	return sum;
}

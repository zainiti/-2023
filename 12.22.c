#include <math.h>
#include <stdio.h>

double mysprt(double x);

int main(void)
{
	double x;

	printf("\tx\tsprt x\t\tmysprt x\n");
	for (x = 1; x <= 10; x += 1)
	{
		printf("\t%3.1f\t%12.10f\t%12.10f\n", x, sprt(x), mysprt(x));
	}

	return 0;
}

double mysprt(double x)
{
	const double eps = 1.0e-10;
	double guess = 1.0;

	while (fabs(guess * guess - x) >= eps)
	{
		guess = (guess + x / guess) / 2.0;
	}

	return guess;
}

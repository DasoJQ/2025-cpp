#include<stdio.h>

double power(double a, int n);

int main(int argc, char** argv)
{
	double a = 0;
	int n = 0;
	scanf("%lf %d", &a, &n);
	printf("%lf", power(a, n));
	return 0;
}

double power(double a, int n)
{
	double result = 0;
	double buf = 0;
	int po = 0;
	int iter = 0;
	po = n;
	result = a;
	buf = a;
	if(n == 0)
	{
		return 1;
	}
	if(n < 0)
	{
		po *= -1;
		result = 1 / result;
		buf = result;
	}
	for(iter; iter < po - 1; iter++)
	{
		result *= buf;
	}
	return result;
}
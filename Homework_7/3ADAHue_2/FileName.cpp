#include<stdio.h>

// 3ADA4A N307. CTeneHb

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
	int iter = 0;
	result = a;
	if(n == 0)
	{
		return 1;
	}
	for(iter; iter < n - 1; iter++)
	{
		result *= a;
	}
	return result;
}
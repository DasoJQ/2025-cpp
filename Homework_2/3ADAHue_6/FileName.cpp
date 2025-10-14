#include<cstdio>
#include<cmath>

// KBADPATHOE yPABHEHue

int main(int argc, char** argv)
{
	float a = 0;
	float b = 0;
	float c = 0;
	float d = 0;
	scanf_s("%f %f %f", &a, &b, &c);
	d = pow(b, 2) - 4 * a * c;
	if(a == 0 && b == 0  && c == 0)
	{
		printf("-1");
	}
	else if(a == 0 && b == 0 && c != 0)
	{
		printf("0");
	}
	else if(d > 0 && a != 0)
	{
		printf("2\n%f\n%f", (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a));
	}
	else if(d == 0 && a != 0)
	{
		printf("1\n%f", -b / (2 * a));
	}
	else if(d < 0)
	{
		printf("0");
	}
	else if(a == 0 && b != 0)
	{
		printf("1\n%f", -c / b);
	}
	return 0;
}
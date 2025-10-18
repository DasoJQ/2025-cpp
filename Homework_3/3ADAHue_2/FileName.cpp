#include<stdio.h>

// yTpeHH99 npo6ejka (1128)

int main(int argc, char** argv)
{
	double x = 0;
	double y = 0;
	int day = 0;
	day = 1;
	scanf_s("%lf %lf", &x, &y);
	while(x < y && y - x > 0.000001)
	{
		x += x * 0.15;
		day += 1;
	}
	printf("%d", day);
	return 0;
}
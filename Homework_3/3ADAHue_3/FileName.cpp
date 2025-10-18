#include<stdio.h>

// HOK (14)

int main(int argc, char** argv)
{
	int ai = 0;
	int a = 0;
	int bi = 0;
	int b = 0;
	scanf_s("%d %d", &ai, &bi);
	a = ai;
	b = bi;
	while(a != b)
	{
		if(a > b)
		{
			a -= b;
		}
		else
		{
			b -= a;
		}
	}
	printf("%d", ai * bi / a);
	return 0;
}
#include<stdio.h>
#include<math.h>

// yPABHEHue (10)

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int x = 0;
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	x = -101;
	for(x;x != 101;x++)
	{
		if((a * pow(x, 3) + b * pow(x, 2) + c * x + d) == 0)
		{
			printf("%d ", x);
		}
	}
	return 0;
}
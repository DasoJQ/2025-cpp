#include<stdio.h>

// 4ucJa Fu6oHa44u (147)

int main(int argc, char** argv)
{
	int x1 = 0;
	int x2 = 0;
	int x3 = 0;
	int n = 0;
	int c = 0;
	x2 = 1;
	c = 2;
	scanf_s("%d", &n);
	n += 1;
	if(n == 1)
	{
		printf("0");
		return 0;
	}
	if(n == 2)
	{
		printf("1");
	}
	while(c < n)
	{
		c += 1;
		x3 = x2 + x1;
		if(c == n)
		{
			printf("%d", x3);
			return 0;
		}
		x1 = x2;
		x2 = x3;
	}
	return 0;
}
#include<stdio.h>

// 3ADA4A N306. MuHumym 4 4uceJ

int min(int a, int b, int c, int d);

int minOfTwo(int a, int b);

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("%d", min(a, b, c, d));
	return 0;
}

int minOfTwo(int a, int b)
{
	if(a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}


int min(int a, int b, int c, int d)
{
	return minOfTwo(minOfTwo(a, b), minOfTwo(c, d));
}
#include <cstdio>

// CTpoku B kHure

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("%d %d", (b / a) + ((b % a) > 0), (b - (b / a) * a) + a * ((b % a) == 0));
	return 0;
}
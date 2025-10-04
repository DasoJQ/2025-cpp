#include <cstdio>

// MKAD

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("%d", (a * b % 109 + 109 * (a < 0)) % 109 + 1);
	return 0;
}
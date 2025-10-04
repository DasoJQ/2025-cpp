#include <cstdio>

// DeJej 96Jok

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("%d %d %d", b / a, b % a, (a - b % a) * (b % a != 0));
	return 0;
}
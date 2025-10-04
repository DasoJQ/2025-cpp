#include <cstdio>

// nepeB93b

int main(int argc, char** argv)
{
	int a = 0;
	scanf_s("%d", &a);
	printf("%d", a / 10 + 1 * (a % 10 != 0));
	return 0;
}
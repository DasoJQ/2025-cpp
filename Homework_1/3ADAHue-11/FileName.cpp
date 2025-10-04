#include <cstdio>

// Bce moryT kopoJu

int main(int argc, char** argv)
{
	long long int a = 0;
	scanf_s("%lld", &a);
	printf("%lld", (1 + (a - 1) / 2) * (1 + (a - 1) / 2));
	return 0;
}
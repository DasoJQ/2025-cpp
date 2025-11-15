#include<stdio.h>

int cnk(int, int);

int f(int);

int main(int argc, char** argv)
{
	int n = 0;
	int k = 0;
	scanf("%n %k", &n, &k);
	printf("%d", cnk(n, k));
	return 0;
}

int cnk(int n, int k)
{
	return (f(n) / (f(k) * f(n - k)));
}

int f(int n)
{
	return 0;
}
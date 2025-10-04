#include <cstdio>

// npoBepbTe DeJumocTb

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("%d",  ((a % b == 0) || (b % a == 0))  + 777 * !((a % b == 0) || (b % a == 0)) );
	return 0;
}
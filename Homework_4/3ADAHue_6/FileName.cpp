#include<stdio.h>
#include<math.h>

#define ARRAY_SIZE 1000

// DBOuHou nepeBopoT

int main(int argc, char** argv)
{
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int iter = 0;
	int arrOne[ARRAY_SIZE] = {};
	int arrTwo[ARRAY_SIZE] = {};
	int arrThree[ARRAY_SIZE] = {};
	scanf_s("%d %d %d %d %d", &n, &a, &b, &c, &d);
	a -= 1;
	b -= 1;
	c -= 1;
	d -= 1;
	for(iter; iter != n; iter++)
	{
		arrOne[iter] = iter + 1;
		arrTwo[iter] = iter + 1;
		arrThree[iter] = iter + 1;
	}
	iter = 0;
	for(iter; iter < n; iter++)
	{
		if((a <= iter) && (iter <= b))
		{
			arrTwo[iter] = arrThree[b + a - iter];
			arrOne[iter] = arrTwo[iter];
		}
	}
	iter = 0;
	for(iter; iter < n; iter++)
	{
		if((c <= iter) && (iter <= d))
		{
			arrOne[iter] = arrTwo[d + c - iter];
		}
	}
	iter = 0;
	for(iter; iter != n; iter++)
	{
		printf("%d ", arrOne[iter]);
	}
	return 0;
}
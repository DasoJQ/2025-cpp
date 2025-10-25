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
	int arr[ARRAY_SIZE] = {};
	scanf_s("%d %d %d %d %d", &n, &a, &b, &c, &d);
	a -= 1;
	c -= 1;
	for(iter; iter != n; iter++)
	{
		arr[iter] = iter + 1;
	}
	for(;;)
	{
	}
	for(;;)
	{
	}
	iter = 0;
	for(iter; iter != n; iter++)
	{
		printf("%d ", arr[iter]);
	}
	return 0;
}
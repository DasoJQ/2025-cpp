#include<stdio.h>
#include<stdlib.h>

// N63 A[0], A[2], A[4], ...

int main(int argc, char** argv)
{
	int n = 0;
	int iter = 0;
	long int* arr;
	scanf("%d", &n);
	arr = (long int*)calloc(n, sizeof(long int));
	for(iter; iter < n; iter++)
	{
		scanf("%ld", &arr[iter]);
	}
	iter = 0;
	for(iter; iter < n; iter++)
	{
		if(iter % 2 == 0)
		{
			printf("%ld ", arr[iter]);
		}
	}
	free(arr);
	return 0;
}
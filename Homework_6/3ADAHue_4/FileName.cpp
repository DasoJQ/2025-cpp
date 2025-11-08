#include<stdio.h>
#include<stdlib.h>

// N66 KOJu4ECTBO EJEMEHTOB, 6OJbWux npeDblDywero

int main(int argc, char** argv)
{
	int n = 0;
	int iter = 0;
	int c = 0;
	long int* arr;
	scanf("%d", &n);
	arr = (long int*)calloc(n, sizeof(long int));
	for(iter; iter < n; iter++)
	{
		scanf("%ld", &arr[iter]);
	}
	iter = 1;
	for(iter; iter < n; iter++)
	{
		if(arr[iter] > arr[iter - 1])
		{
			c += 1;
		}
	}
	printf("%d", c);
	free(arr);
	return 0;
}
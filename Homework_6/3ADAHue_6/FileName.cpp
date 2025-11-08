#include<stdio.h>
#include<stdlib.h>

// N68 KOJu4ECTBO EJEMEHTOB, 6OJbWux O6Oux COCEDEu

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
	iter = 2;
	for(iter; iter < n; iter++)
	{
		if(arr[iter - 1] > arr[iter] && arr[iter - 1] > arr[iter - 2])
		{
			c += 1;
		}
	}
	printf("%d", c);
	free(arr);
	return 0;
}
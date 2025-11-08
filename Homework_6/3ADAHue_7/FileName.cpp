#include<stdio.h>
#include<stdlib.h>

// N69 nepecTABuTb EJEMEHTbl B O6PATHOM nop9DKE

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
	}
	iter = 0;
	for(iter; iter < n; iter++)
	{
		printf("%ld ", arr[iter]);
	}
	free(arr);
	return 0;
}
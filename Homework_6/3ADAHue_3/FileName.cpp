#include<stdio.h>
#include<stdlib.h>

// N65 KOJu4ECTBO noJojuTEJbHblx EJEMEHTOB

int main(int argc, char** argv)
{
	int n = 0;
	int c = 0;
	int iter = 0;
	long int* arr;
	scanf("%d", &n);
	arr = (long int*)calloc(n, sizeof(long int));
	for(iter; iter < n; iter++)
	{
		scanf("%ld", &arr[iter]);
		if(arr[iter] > 0)
		{
			c += 1;
		}
	}
	printf("%d", c);
	free(arr);
	return 0;
}
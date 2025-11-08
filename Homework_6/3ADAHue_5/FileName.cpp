#include<stdio.h>
#include<stdlib.h>

// N67 ECTb Ju DBA EJEMEHTA C ODuHAKOBblMu 3HAKAMu

int main(int argc, char** argv)
{
	int n = 0;
	int iter = 0;
	int flag = 0;
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
		if(arr[iter] > 0 && arr[iter - 1] > 0)
		{
			flag += 1;
		}
		else if(arr[iter] < 0 && arr[iter - 1] < 0)
		{
			flag += 1;
		}
	}
	if(flag != 0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	free(arr);
	return 0;
}
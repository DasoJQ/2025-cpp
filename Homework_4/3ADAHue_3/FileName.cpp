#include<stdio.h>

#define ARRAY_SIZE 1000

// KOHTPonepauu9

int main(int argc, char** argv)
{
	int n = 0;
	int iter = 0;
	int max = 0;
	int min = 0;
	max = -99999;
	min = 99999;
	int arr[ARRAY_SIZE] = {};
	scanf_s("%d", &n);
	for(iter; iter != n; iter++)
	{
		scanf_s("%d", &arr[iter]);
		if(max < arr[iter])
		{
			max = arr[iter];
		}
		if(min > arr[iter])
		{
			min = arr[iter];
		}
	}
	iter = 0;
	for(iter; iter != n; iter++)
	{
		if(arr[iter] == max)
		{
			arr[iter] = min;
		}
		printf("%d ", arr[iter]);
	}
	return 0;
}
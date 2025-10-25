#include<stdio.h>
#include<math.h>

#define ARRAY_SIZE 1000

// 6Jujauwee 4ucJo

int main(int argc, char** argv)
{
	int n = 0;
	int iter = 0;
	int closest = 0;
	int minDist = 0;
	int number = 0;
	minDist = 9999;
	int arr[ARRAY_SIZE] = {};
	scanf_s("%d", &n);
	for(iter; iter != n; iter++)
	{
		scanf_s("%d", &arr[iter]);
	}
	scanf_s("%d", &number);
	iter = 0;
	for(iter; iter != n; iter++)
	{
		if(abs(number - arr[iter]) < minDist)
		{
			closest = arr[iter];
			minDist = abs(number - arr[iter]);
		}
		if((abs(number - arr[iter]) == minDist) && (closest > arr[iter]))
		{
			closest = arr[iter];
		}
	}
	printf("%d", closest);
	return 0;
}
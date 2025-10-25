#include<stdio.h>

#define ARRAY_SIZE 1000
// makcumaJbHblu EJEMEHT

int main(int argc, char** argv)
{
	int n = 0;
	int iter = 0;
	int max = 0;
	int index = 0;
	int l = 0;
	int r = 0;
	max = -99999;
	scanf_s("%d", &n);
	int arr[ARRAY_SIZE] = {};
	for(iter; iter != n; iter++)
	{
		scanf_s("%d", &arr[iter]);
	}
	scanf_s("%d %d", &l, &r);
	l -= 1;
	iter = l;
	for(iter; iter != r; iter++)
	{
		if(arr[iter] > max)
		{
			max = arr[iter];
			index = iter;
		}
	}
	if(l == r)
	{
		printf("%d %d", arr[l], l + 1);
		return 0;
	}
	printf("%d %d", max, index + 1);
	return 0;
}
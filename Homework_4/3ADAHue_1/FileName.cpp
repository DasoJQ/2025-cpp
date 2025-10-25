#include<stdio.h>

#define ARRAY_SIZE 1000

// JuHeuHblu nouck

int main(int argc, char** argv)
{
	int n = 0;
	int iter = 0;
	int num = 0;
	int c = 0;
	scanf_s("%d", &n);
	int arr[ARRAY_SIZE] = {};
	for(iter; iter != n; iter++)
	{
		scanf_s("%d", &arr[iter]);
	}
	scanf_s("%d", &num);
	iter = 0;
	for(iter; iter != n; iter++)
	{
		if(arr[iter] == num)
		{
			c += 1;
		}
	}
	printf("%d", c);
	return 0;
}
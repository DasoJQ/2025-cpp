#include<stdio.h>

#define ARRAY_SIZE 1000

//PA3BOPOT

int main(int argc, char** argv)
{
	int n = 0;
	int iter = 0;
	int arr[ARRAY_SIZE] = {};
	scanf_s("%d", &n);
	for(iter; iter != n; iter++)
	{
		scanf_s("%d", &arr[iter]);
	}
	iter -= 1;
	for(iter; iter != -1; iter--)
	{
		printf("%d ", arr[iter]);
	}
	return 0;
}
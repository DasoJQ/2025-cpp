#include<stdio.h>
#include<math.h>


int prime(int);

int main(int argc, char** argv)
{
	int n = 0;
	scanf("%d", &n);
	if(prime(n) == 0)
	{
		printf("prime");
	}
	else
	{
		printf("composite");
	}
	return 0;
}

int prime(int n)
{
	int flag = 0;
	int iter = 0;
	iter = 2;
	for(iter; iter < sqrt(n) + 1 && n != 2; iter++)
	{
		if(n % iter == 0)
		{
			flag = 1;
			break;
		}
	}
	return flag;
}
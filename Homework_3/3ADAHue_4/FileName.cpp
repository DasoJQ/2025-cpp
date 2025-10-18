#include<stdio.h>

// PABHblE EJEMEHTbl (1141)

int main(int argc, char** argv)
{
	int count = 0;
	int countMax = 0;
	int nPrevious = -1;
	count = 1;
	countMax = 1;
	do
	{
		int n = 0;
		scanf_s("%d", &n);
		if(n == nPrevious)
		{
			count += 1;
		}
		else
		{
			if(count > countMax)
			{
				countMax = count;
			}
			count = 1;
		}
		nPrevious = n;
	}while(nPrevious != 0);
	printf("%d", countMax);
	return 0;
}
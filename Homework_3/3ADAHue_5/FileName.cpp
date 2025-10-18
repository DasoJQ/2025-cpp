#include<stdio.h>

// BTOPOu makcumym (1138)

int main(int argc, char** argv)
{
	int max = 0;
	int maxPrevious = 0;
	int nPrevious = 0;
	do
	{
		int n = 0;
		scanf_s("%d", &n);
		if(n > max)
		{
			maxPrevious = max;
			max = n;
		}
		else if(n > maxPrevious)
		{
			maxPrevious = n;
		}
		nPrevious = n;
	}while(nPrevious != 0);
	printf("%d", maxPrevious);
	return 0;
}
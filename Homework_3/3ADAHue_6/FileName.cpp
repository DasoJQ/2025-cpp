#include<stdio.h>

// OTTEneJb (264)

int main(int argc, char** argv)
{
	int days = 0;
	int counter = 0;
	int counterMax = 0;
	scanf_s("%d", &days);
	for(days; days != 0; days--)
	{
		int n = 0;
		scanf_s("%d", &n);
		if(n > 0)
		{
			counter += 1;
			if(counter > counterMax)
			{
				counterMax = counter;
			}
		}
		else
		{
			if(counter > counterMax)
			{
				counterMax = counter;
			}
			counter = 0;
		}
	}
	printf("%d", counterMax);
	return 0;
}
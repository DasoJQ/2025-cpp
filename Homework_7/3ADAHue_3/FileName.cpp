#include<stdio.h>



bool election(bool x, bool y, bool z);

int main(int argc, char** argv)
{
	bool x = 0;
	bool y = 0;
	bool z = 0;
	scanf("%d %d %d", &x, &y, &z);
	printf("%d", election(x, y, z));
	return 0;
}

bool election(bool x, bool y, bool z)
{
	int counterOfTrue = 0;
	if(x == 1)
	{
		counterOfTrue += 1;
	}
	if(y == 1)
	{
		counterOfTrue += 1;
	}
	if(z == 1)
	{
		counterOfTrue += 1;
	}
	if(counterOfTrue > 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
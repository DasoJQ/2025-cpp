#include<cstdio>

// Kopo6ku

int main(int argc, char** argv)
{
	int a1 = 0;
	int b1 = 0;
	int c1 = 0;
	int a2 = 0;
	int b2 = 0;
	int c2 = 0;
	int buff = 0;
	scanf_s("%d %d %d %d %d %d", &a1, &b1, &c1, &a2, &b2, &c2);
	if(a1 > b1)
	{
		buff = a1;
		a1 = b1;
		b1 = buff;
	}
	if(b1 > c1)
	{
		buff = b1;
		b1 = c1;
		c1 = buff;
	}
	if(a1 > b1)
	{
		buff = a1;
		a1 = b1;
		b1 = buff;
	}
	if(a2 > b2)
	{
		buff = a2;
		a2 = b2;
		b2 = buff;
	}
	if(b2 > c2)
	{
		buff = b2;
		b2 = c2;
		c2 = buff;
	}
	if(a2 > b2)
	{
		buff = a2;
		a2 = b2;
		b2 = buff;
	}
	if((a1 == a2) && (b1 == b2) && (c1 == c2))
	{
		printf("Boxes are equal");
	}
	else if((a1 >= a2) && (b1 >= b2) && (c1 >= c2))
	{
		printf("The first box is larger than the second one");
	}
	else if((a1 <= a2) && (b1 <= b2) && (c1 <= c2))
	{
		printf("The first box is smaller than the second one");
	}
	else
	{
		printf("Boxes are incomparable");
	}
	return 0;
}
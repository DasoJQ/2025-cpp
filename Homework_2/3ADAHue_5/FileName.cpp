#include<cstdio>

// WkoJbHa9 aJre6pa
// 9 o4eHb no3DHo BcnomHuJ npo to, 4to Ham pa3peweHo ucnoJb3oBatb switch(((((

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d %d %d", &a, &b, &c);
	if(a == 0 && b == 0 && c ==0)
	{
		printf("0");
	}
	if(a == 0 && b == 0 && c != 0)
	{
		if(c == 1)
		{
			printf("y");
		}
		else if(c == -1)
		{
			printf("-y");
		}
		else
		{
			printf("%dy", c);
		}
	}
	if(a == 0 && b != 0 && c == 0)
	{
		if(b == 1)
		{
			printf("x");
		}
		else if(b == -1)
		{
			printf("-x");
		}
		else
		{
			printf("%dx", b);
		}
	}
	if(a == 0 && b > 0 && c > 0)
	{
		if(b == 1 && c == 1)
		{
			printf("x+y");
		}
		else if(b == 1 && c != 1)
		{
			printf("x+%dy", c);
		}
		else if(b != 1 && c == 1)
		{
			printf("%dx+y", b);
		}
		else
		{
			printf("%dx+%dy", b, c);
		}
	}
	if(a == 0 && b > 0 && c < 0)
	{
		if(b == 1 && c == -1)
		{
			printf("x-y");
		}
		else if(b == 1 && c != -1)
		{
			printf("x%dy", c);
		}
		else if(b != 1 && c == -1)
		{
			printf("%dx-y", b);
		}
		else
		{
			printf("%dx%dy", b, c);
		}
	}
	if(a == 0 && b < 0 && c > 0)
	{
		if(b == -1 && c == 1)
		{
			printf("-x+y");
		}
		else if(b == -1 && c != 1)
		{
			printf("-x+%dy", c);
		}
		else if(b != -1 && c == 1)
		{
			printf("%dx+y", b);
		}
		else
		{
			printf("%dx+%dy", b, c);
		}
	}
	if(a == 0 && b < 0 && c < 0)
	{
		if(b == -1 && c == -1)
		{
			printf("-x-y");
		}
		else if(b == -1 && c != -1)
		{
			printf("-x%dy", c);
		}
		else if(b != -1 && c == -1)
		{
			printf("%dx-y", b);
		}
		else
		{
			printf("%dx%dy", b, c);
		}
	}
	if(a != 0 && b == 0 && c == 0)
	{
		printf("%d", a);
	} 
	if(a != 0 && b == 0 && c > 0)
	{
		if(c == 1)
		{
			printf("%d+y", a);
		}
		else
		{
		printf("%d+%dy", a, c);
		}
	}
	if(a != 0 && b == 0 && c < 0)
	{
		if(c == -1)
		{
			printf("%d-y", a);
		}
		else
		{
			printf("%d%dy", a, c);
		}
	}
	if(a != 0 && b > 0 && c == 0)
	{
		if(b == 1)
		{
			printf("%d+x", a);
		}
		else
		{
			printf("%d+%dx", a, b);
		}
	}
	if(a != 0 && b < 0 && c == 0)
	{
		if(b == -1)
		{
			printf("%d-x", a);
		}
		else
		{
			printf("%d%dx", a, b);
		}
	}
	if(a != 0 && b > 0 && c > 0)
	{
		if(b == 1 && c == 1)
		{
			printf("%d+x+y", a);
		}
		else if(b == 1 && c != 1)
		{
			printf("%d+x+%dy", a, c);
		}
		else if(b != 1 && c == 1)
		{
			printf("%d+%dx+y", a, b);
		}
		else
		{
			printf("%d+%dx+%dy", a, b, c);
		}
	}
	if(a != 0 && b > 0 && c < 0)
	{
		if(b == 1 && c == -1)
		{
			printf("%d+x-y", a);
		}
		else if(b == 1 && c != -1)
		{
			printf("%d+x%dy", a, c);
		}
		else if(b != 1 && c == -1)
		{
			printf("%d+%dx-y", a, b);
		}
		else
		{
		printf("%d+%dx%dy", a, b, c);
		}
	}
	if(a != 0 && b < 0 && c > 0)
	{
		if(b == -1 && c == 1)
		{
			printf("%d-x+y", a);
		}
		else if(b == -1 && c != 1)
		{
			printf("%d-x+%dy", a, c);
		}
		else if(b != -1 && c == 1)
		{
			printf("%d%dx+y", a, b);
		}
		else
		{
			printf("%d%dx+%dy", a, b, c);
		}
	}
	if(a != 0 && b < 0 && c < 0)
	{
		if(b == -1 && c == -1)
		{
			printf("%d-x-y", a);
		}
		else if(b == -1 && c != -1)
		{
			printf("%d-x%dy", a, c);
		}
		else if(b != -1 && c == -1)
		{
			printf("%d%dx-y", a, b);
		}
		else
		{
			printf("%d%dx%dy", a, b, c);
		}
	}
	return 0;
}
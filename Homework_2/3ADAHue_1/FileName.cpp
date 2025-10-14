#include<cstdio>
#include<cmath>

// WaxmaTHble furypbl

int main(int argc, char** argv)
{
	char x1 = 0;
	char y1 = 0;
	char x2 = 0;
	char y2 = 0;
	bool f = 0;
	scanf(" %c %c %c %c", &x1, &y1, &x2, &y2);
	if ((y1 != 49) && (x2 == x1) && ((y2 == y1 + 1) || ((y1 == 50) && (y2 == 52))))
	{
		f = 1;
		printf("Pawn\n");
	}
	if((pow((x1 - x2), 2) + pow((y1 - y2), 2) == 5))
	{
		f = 1;
		printf("Knight\n");
	}
	if(abs(x1 - x2) == abs(y1 - y2))
	{
		f = 1;
		printf("Bishop\n");
	}
	if(x1 == x2 || y1 == y2)
	{
		f = 1;
		printf("Rook\n");
	}
	if((x1 == x2 || y1 == y2) || (abs(x1 - x2) == abs(y1 - y2)))
	{
		f = 1;
		printf("Queen\n");
	}
	if((abs(x1 - x2) <= 1) && (abs(y1 - y2) <= 1))
	{
		f = 1;
		printf("King\n");
	}
	if(f == 0)
	{
		printf("Nobody");
	}
	return 0;
}
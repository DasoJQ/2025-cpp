#include<cstdio>

// C4ACTJuBblu 6uJeT

int main(int argc, char** argv)
{
	char a = 0;
	char b = 0;
	char c = 0;
	char d = 0;
	char e = 0;
	char f = 0;
	scanf(" %c %c %c %c %c %c", &a, &b, &c, &d, &e, &f);
	if(a + b + c == d + e + f)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
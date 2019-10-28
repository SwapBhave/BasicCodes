
#include<stdio.h>

int main(void)
{
	char c;
	printf("\n Enter Any charactor C: \n");
	scanf("%c", &c);
	printf("\n Enter value is %d", c);
	if (c > 65 && 90 > c)
	{
		printf("\n C is Uppercase Alphabet");
	}
	else if (97 < c && 122 > c)
	{
		printf("\n C is Lowercase Alphabet\n");
	}
	else if (48 < c && 57 > c)
	{
		printf("\n C is Digit \n");
	}
	else if (c == 32)
	{
		printf("\n C is Space\n");
	}
	else if (c == 9)
	{
		printf("\n C is tab");
	}
	else if (c == 13)
	{
		printf("\n C is carriage return\n");
	}
	else if (c == 10)
	{
		printf("\n C is new line\n");
	}
	else
	{
		printf("\n Not listed\n");
	}
	return 0;
}


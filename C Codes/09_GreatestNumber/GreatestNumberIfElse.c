
#include<stdio.h>

int main(void)
{
	int a, b;
	printf("\n Enter two Numbers A and B:\n");
	scanf("%d %d", &a, &b);
	if (a > b)
	{
		printf("\n A is Greater than B \n");
	}
	else
	{
		printf("\n B is Greater than A \n");
	}
	return 0;
}
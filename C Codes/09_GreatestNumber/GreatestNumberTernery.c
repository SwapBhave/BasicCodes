
#include<stdio.h>

int main()
{
	int a, b;
	printf("\n Enter two Numbers A and B:\n");
	scanf("%d %d", &a, &b);
	a > b ? printf("\n A is grater than B \n") : printf("\n B is greater than A \n");
	return 0;
}
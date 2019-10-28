/***********************Program  2****************************************/

#include<stdio.h>

void GlobalCount();

int main()
{
	GlobalCount();
	GlobalCount();
	return (0);
}

void GlobalCount()
{
	static int a;
	printf("\nValue of a Without Increment is : %d\n", a);
	a = a + 1;
	printf("\nValue of a After Increment is : %d\n", a);
}
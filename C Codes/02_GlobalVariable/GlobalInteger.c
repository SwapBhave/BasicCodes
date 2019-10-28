/***********************Program  1****************************************/

#include<stdio.h>

int Global;

void IncrementByOne();
void IncrementByTwo();

int main()
{
	printf("\nGlobal Variable value inside main is : %d\n", Global);
	IncrementByOne();
	IncrementByTwo();
	IncrementByOne();
	IncrementByTwo();

	return 0;
}

void IncrementByOne()
{
	Global = Global + 1;
	printf("\nGlobal Variable value At IncrementByOne is : %d\n", Global);
}

void IncrementByTwo()
{
	Global = Global + 2;
	printf("\nGlobal Variable value At IncrementByTwo is : %d\n", Global);
}

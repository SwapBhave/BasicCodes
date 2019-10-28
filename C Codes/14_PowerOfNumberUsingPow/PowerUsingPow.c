#include<stdio.h>
#include<math.h>

int main(void)
{
	int Number;
	double Power;
	printf("\n Enter number for power:\n");
	scanf("%d",&Number);
	Power= pow(Number,2);
	printf("\n Power of %d is: %lf",Number,Power);
	return 0;
}

